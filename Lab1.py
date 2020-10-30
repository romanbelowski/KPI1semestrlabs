# Задано сторону квадрата. Знайти його діагональ, периметр та площу.
import math

#Ввід даних
side = float(input('Input the side of square: '))  # Ввід сторони квадрату

perimeter = 4 * side            # Обчислення периметра
diagonal = math.sqrt(2) * side  # Обчислення діагоналі
area = side ** 2                # Обчислення площі

# Вивід обчислень на екран
print('Perimeter is ', perimeter)
print('Diagonal is ', diagonal)
print('Area is ', area)
