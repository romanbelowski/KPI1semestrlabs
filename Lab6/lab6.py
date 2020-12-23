n = int(input("Input n: "))
a = int(input("Input a: "))
b = int(input("Input b: "))

if a <= 0 or b <= 0:
    print("Error: a and b must be higher than 0")
elif n < 1:
    print("Error: n must be higher than or equal to 1")

def root5(x):
    z = x
    for i in range(n):
        z = 1.0/5.0 * (x / (z*z*z*z) + 4 * z)
    return z

print (str("Sum is ") +str(root5(root5(a*b)) + root5(a)))
