class Keyboard:
    __string = ""
    def __init__(self,  name):
        self.name = name

    def keyPress(self, key):
        self.__string += str(key)

    def keyEnter(self):
        print(self.__string)
        self.__string = ""

class ABSTRACT_PC:
    def info(self, x):     # Абстрактный метод
        raise NotImplementedError("Необходимо переопределить метод")


class PC(ABSTRACT_PC):
    isOn = False
    def __init__(self,  name, OS):
        self.name = name
        self.OS = name
        self.isOn = False

    @staticmethod
    def ping():
        print("Pong")

    def turnOn(self): #  утиная типизация, методы виртуальные 
        isOn = True

    def turnOff(self):  #  утиная типизация, методы виртуальные 
        isOn = False

    def info(self, x):     # Абстрактный метод
        print("Заряд аккамулятора: Infinity")

class Laptop(PC):
    _BatterySize = 0

    def __init__(self,  name, OS, BatterySize):
        super().__init__( name, OS)
        self._BatterySize = BatterySize
        self.__keyboard = Keyboard("MyKeyboard")

    def info(self, x):
        print("Заряд аккамулятора: " + str(_BatterySize))

    def __add__(self, other: int) -> 'Laptop':
        return Laptop(self.name, self.OS , self.BatterySize + other)
    
    def __add__(self, other: 'Laptop') -> 'Laptop':
        return Laptop(self.name, self.OS , self.BatterySize + other.BatterySize)

    def __chargeSet(self, charge):
        if(self.__canChangeCharge(charge)):
            self._BatterySize = charge
        else:
            self.turnOff()

    def __canChangeCharge(self, charge):
        if((self._BatterySize - charge) > 0):
            return True
        else:
            return False

    def turnOn(self): #  утиная типизация, методы виртуальные 
        self.__chargeSet(self._BatterySize - 15)
        
    def turnOff(self):  #  утиная типизация, методы виртуальные 
        self.__chargeSet(self._BatterySize)
    
    def keyPress(self, key=None, isEndPrint=False):
        
        if(isinstance(key, int)):
            self.__chargeSet(self._BatterySize - 3)
            self.__keyboard.keyPress(key)
        elif(isinstance(key, str)):
            self.__chargeSet(self._BatterySize - 3*len(key))
            self.__keyboard.keyPress(key)
        else:
            print("Неверный формат вывода")

        if(isEndPrint):
            self.keyEnter()

    def keyEnter(self):
        self.__chargeSet(self._BatterySize - 10)
        self.__keyboard.keyEnter()

if __name__ == "__main__":
    computer = PC("MyPC", "Windows 10")
    laptop = Laptop("MyLaptop", "Windows 11", 15000)
    
    laptop.keyPress(1)
    laptop.keyPress(") Hello world!")
    laptop.keyPress(2)
    laptop.keyPress(") Hello world!", True)
    laptop.keyPress(3)
    laptop.keyPress(") Hello world!", False)
    laptop.keyPress(4)
    laptop.keyPress(')')
    laptop.keyPress(' ')
    laptop.keyPress('H')
    laptop.keyPress('e')
    laptop.keyPress('l')
    laptop.keyPress('l')
    laptop.keyPress('o')
    laptop.keyPress(' ')
    laptop.keyPress('w')
    laptop.keyPress('o')
    laptop.keyPress('r')
    laptop.keyPress('l')
    laptop.keyPress('d')
    laptop.keyPress('!')
    laptop.keyEnter()
    
    PC.ping()