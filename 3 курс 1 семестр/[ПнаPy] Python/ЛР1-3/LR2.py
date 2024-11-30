import turtle as t

while .1:
    whatdraw = int(input("What draw? 1 - line; 2 - Rectangle; 3 - Circle; 0 - clear. Your choose: "))
    match whatdraw:
        case 1:
            angles = int(input("Number of angles? - "))
            if (angles > 4 or angles < 0):
                print("Now i can't do this for this numbers of angles!")
            else:
                lenght = int(input("input Lenght: ")) 
                for steps in range(angles):
                    t.forward(lenght)
                    t.left(90)
        case 2:
            lenght = int(input("Lenght: ")) * 5
            i=0
            while i != 3:
                t.forward(lenght)
                t.left(120)
                i+=1
        case 3:
            radius = int(input("Radius: ")) * 5
            for c in ('blue', 'red', 'green', 'black'):
                t.color = c
                t.circle(radius, 90)
        case 0:
            t.clear()
        case _:
            break