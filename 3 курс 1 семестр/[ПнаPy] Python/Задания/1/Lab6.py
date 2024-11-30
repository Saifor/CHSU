import tkinter as tk
from tkinter import filedialog
import numpy as np
import plotly.graph_objects as go
import struct

class Vector:
    X :any
    Y :any
    
    def __init__(self, x, y):
        self.X = x
        self.Y = y

class Data:
    Len : Vector
    Scale : Vector
    Start : Vector
    End : Vector
    Size : Vector
    Level : float

    def __init__(self, args):
        self.Len = Vector(int(args[0]), int(args[1]))
        self.Scale = Vector(float(args[2].replace(',', '.')), float(args[3].replace(',', '.')))
        self.Start = Vector(int(args[4]), int(args[5]))
        self.End = Vector(int(args[6]), int(args[7]))
        self.Size = Vector(int(args[8]), int(args[9]))
        self.Level = float(args[10].replace(',', '.'))

floats = []
root = tk.Tk()
root.withdraw()

filePath = filedialog.askopenfilename()

with open(filePath, 'r') as file:
        data = Data(file.readline().split('|'))    
        skiped = int(file.readline())  

with open(filePath, 'rb') as file:
    file.read(skiped)
    while True:
        bytess = file.read(4)
        if not bytess:
            break              
        floats.append(struct.unpack('<f', bytearray(bytess)))
        

matrixZ = np.zeros((data.Len.Y, data.Len.X), 'float32')

index = 0
for y in range(data.Start.Y, data.Len.Y): 
    for x in range(data.Start.X, data.Len.X):
        matrixZ[y][x] = floats[index][0] + data.Level
        index += 1

delta = 3
fig = go.Figure(
    data=go.Contour(
        z=matrixZ,
        colorscale='Hot',
        contours=dict(
            #coloring ='heatmap',
            showlabels = True, 
            start=int(data.Level*2 - delta),
            end=int(data.Level*2 + delta),
            size=0.8,
        ), 
        dx = data.Scale.X,
        dy = data.Scale.Y
    )
)

fig.update_layout(
    {   
        "title": {
            "text": "<b>Данные</b>",
            "font": {"size": 14} 
        },

        "showlegend": True,

        "xaxis": {
            "title": "Ширина\n ----------------------->",
            "showticklabels": True,
            'domain': [0.0, 1.0],
            "dtick": 200
        },

        "yaxis": {
            "title": "Высота\n ----------------------->",
            "showticklabels": True,
            'domain': [0.0, 1.0],
            "dtick": 1000
        }
        
    }
)

fig.show()
input()