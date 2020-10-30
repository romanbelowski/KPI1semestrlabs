# Числа а і b виражають довжини катетів одного прямокутного трикутника, а с і d – ншого. З’ясувати,
# чи є ці трикутники подібними.

# Ввід даних
a_cathetus = float(input('Input the first cathetus of triangle number 1: '))   # Введення катета а
b_cathetus = float(input('Input the second cathetus of triangle number 1: '))  # Введення катета b
c_cathetus = float(input('Input the first cathetus of triangle number 2: '))   # Введення катета c
d_cathetus = float(input('Input the second cathetus of triangle number 2: '))  # Введення катета d


# Перевірка на подібність
if (a_cathetus / c_cathetus) == (b_cathetus / d_cathetus):
    Bool = True

else:
    Bool = False

# Вивід
print("Bool:", Bool)
