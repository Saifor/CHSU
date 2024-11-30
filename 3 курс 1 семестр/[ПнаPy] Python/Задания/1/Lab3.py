import collections
import time


set = set()  # Множество
defaultdict = collections.defaultdict()  # Словарь со значениями по умолчанию

with open("Lab3_inputSet.txt", 'r') as file:
    while True:
        data = file.readline()
        if not data:
            break
        for tmp in data.split(' '):
            set.add(int(tmp))
    file.close()

with open("Lab3_inputDefaultdict.txt", 'r') as file:
    while True:
        data = file.readline()
        if not data:
            break

        key = data.split()[0]
        value = data.split()[1]
        defaultdict.setdefault(key, []).append(int(value))
    file.close()



print("-------------")
print("Структура Set")
print("-------------")

start = time.time()
99246 in set
print("Время доступа: ", '{0:.30f}'.format(time.time() - start))

start = time.time()
set.add(5069665065520620)
print("Время добавления: ",'{0:.9f}'.format(time.time() - start))

start = time.time()
set.discard(99246)
print("Время удаления: ",'{0:.9f}'.format(time.time() - start))

start = time.time()
# A = {1, 2, 3}
# B = {2, 3, 4, 5}
# C = A - B = {1, 2, 3, 4, 5}
set | {1, 2 , 3} # Объединение множества
print("Время объединения: ",'{0:.9f}'.format(time.time() - start))

start = time.time()
# A = {1, 2, 3, 4}
# B = {3, 4, 5, 6}
# C = A - B = {3, 4}
set & {1, 2 , 3}  # Пересечение множества
print("Время пересечения: ",'{0:.9f}'.format(time.time() - start))

start = time.time()
# A = {1, 2, 3, 4} 
# B = {3, 4, 5, 6}
# C = A - B = {1, 2}
set - {1, 2 , 3}  # Разность множеств
print("Время разницы: ",'{0:.9f}'.format(time.time() - start))

start = time.time()
set <= {1, 2 , 3}
print("Время сравнения: ",'{0:.9f}'.format(time.time() - start))

start = time.time()
99246 in set
print("Время поиска: ",'{0:.9f}'.format(time.time() - start))

start = time.time()
set = sorted(set)
print("Время сортировки: ",'{0:.9f}'.format(time.time() - start))



print("-------------")
print("Структура Defaultdict")
print("-------------")

start = time.time()
defaultdict['88673']
print("Время доступа: ", '{0:.9f}'.format(time.time() - start))

start = time.time()
defaultdict['1'] = 1234567
print("Время добавления: ",'{0:.9f}'.format(time.time() - start))

start = time.time()
del defaultdict['1']
print("Время удаления: ",'{0:.9f}'.format(time.time() - start))

start = time.time()
defaultdict == {1:1, 2:1 , 3:1}
print("Время сравнения: ",'{0:.9f}'.format(time.time() - start))

start = time.time()
defaultdict['67329']
print("Время поиска: ",'{0:.9f}'.format(time.time() - start))


with open("Lab3_outputSet.txt", 'w') as file:
    for value in set: 
        file.write(str(value)+ "\n")
    file.close()

with open("Lab3_outputDefaultdict.txt", 'w') as file:
    for key in defaultdict: 
        file.write(str(key) + " " + str(defaultdict[key]) + "\n")
    file.close()