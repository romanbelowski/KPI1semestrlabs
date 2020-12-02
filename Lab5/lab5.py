# 26. Для кожного натурального числа з інтервалу [a, b] знайти всі дільники, їх кількість та
# суму.
a = int(input("Input a: "))  # Ввід a.
b = int(input("Input b: "))  # Ввід b.
if a < 1 or b < 1 or b < a:
    #  якщо a або b менше 1 або b < a, то вивід помилки
    print("Error: a and b must be higher than or equal to 1, b must be higher than a ")
else:
    i = a
    # Повторення циклу для кожного числа з інтервалу.
    for i in range(i, b+1):
        sum = 0
        k = 0
        print("Divisor(s) of number", i)
        f = 1
        # Знаходження дільників числа з інтервалу, їх кількості та суми.
        for f in range(1, i+1):
            if i % f == 0:
                print(str(f) + ' ')
                k += 1
                sum += f
        print("Amount of divisors", k)  # Виведення кількості.
        print("Sum of divisors", sum)  # Виведення cуми.
