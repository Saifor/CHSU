import struct
import plotly.graph_objects as go
import numpy as np
from pylab import rcParams


myfile='data.dat'
def dotInNum(str):
    mystr = ''
    for i in range(len(str)):
        if(str[i]==','):
            mystr += '.'
        else:
            mystr += str[i]
    return mystr



f = open(myfile,'r')
strarr = f.readline().split('|')

xlen=int(strarr[0])       #размер карты по ширине                  (371)
ylen = int(strarr[1])     #размер карты по длине                   (784)
stepx = float(dotInNum(strarr[2]))  #масштаб карты по ширине   (3,5498046875)
stepy = float(dotInNum(strarr[3]))  #масштаб карты по длине    (8)
startx = int(strarr[4])   #начало данных на карте по ширине        (0)
starty = int(strarr[5])   #начало данных на карте по длине         (0)
lastx = int(strarr[6])    #конец данных на карте по ширине         (370)
lasty = int(strarr[7])    #конец данных на карте по длине          (783)
width = int(strarr[8])    #количество точек по ширине              (371)
height = int(strarr[9])   #количество точек по длине               (784)
level = float(dotInNum(strarr[10]))  #базовый уровень          (20,7608547210693)
header = int(f.readline())  #длина заголовка                         (68)

f.close()


def CreatePlot(myfile):


    ZAllvalues = []

    with open(myfile, 'rb') as f:
        f.read(header)        # Пропускаем заголовок (2 строки, 68 символов)
        while True:                 
            bytesZ = f.read(4)    
            if not bytesZ:
                break
            Z = float(struct.unpack('<f', bytes(bytesZ))[0])
            ZAllvalues.append(Z+level)
    

    i=0
    XYZMatrix = [[0.0 for x in range(width)] for y in range(height)] 
    for y in range(height):  
        for x in range(width):
            XYZMatrix[y][x]=ZAllvalues[i]
            i+=1
    
    X = np.arange(startx , lastx * stepx, stepx) #равномерное разнесение значений x на оси
    Y = np.arange(starty , lasty * stepy, stepy)
        
    
    #f = go.Figure(data=[go.Contour(z=XYZMatrix,colorscale='Viridis')]) #построить поверхность подан ным в матрице
    #layout = go.Layout(width = stepx*lastx,height=stepy*lasty)
    
    f = go.Figure(data=[go.Surface(x=X,y=Y,z=XYZMatrix,colorscale='Viridis',)]) #построить поверхность по данным в матрице
    
    #f.update_layout(scene=dict(xaxis=dict(nticks=int(stepx*5),tickvals=[100,200,300]),yaxis=dict(nticks=int(stepy*5),tickvals=[100,200,300])))#Дистанция на которой матрица раскинется
    f.update_layout(
        scene=dict(
            xaxis=dict(
                nticks=int(stepx*5),
                range=[startx,lastx*stepx]
            ),
            yaxis=dict(
                nticks=int(stepy*5),
                range=[starty,lasty*stepy]
            )
        )
    )
    
    f.update_layout(scene = {"aspectratio": {"x": stepx , "y": stepy, "z": 0.1}}) # установить соотношение сторон для поверхности
    
   
    #f.add_trace(go.Surface(x=XYZMatrix,colorscale='Viridis'))
    
    f.show() 
    f.write_html('fig.html', auto_open=True) 

CreatePlot("data.dat")
            
            
