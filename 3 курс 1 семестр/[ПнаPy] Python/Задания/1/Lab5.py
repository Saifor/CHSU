try:
    numberA = int(input("Введите число A: "))
    numberB = int(input("Введите число B: "))
    
    if(numberB == 0):
        raise NotImplementedError("Деление на 0")
    
    print("A / B = ", numberA/numberB)
except:
    print("Преобразование прошло неудачно")
finally:
    print("Блок try завершил выполнение")
print("Завершение программы")