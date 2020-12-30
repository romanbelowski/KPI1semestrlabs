#Із заданого рядка символів вилучити всі слова,
#які закінчуються групою заданих символів. Підрахувати кількість вилучень.
words = input("Enter the words:\n").split()
print(words)
s=input("enter symbol:\n")
k=0
new = ''
for i in words:
    if i[len(i)-len(s):] == s:
        k += 1
    else:
        new += f"{i} "
print(f"{new[:-1]}\n{k}")
