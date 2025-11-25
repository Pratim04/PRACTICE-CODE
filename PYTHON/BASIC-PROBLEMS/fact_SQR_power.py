import math

def factorial(n):
    f = 1
    for i in range(1, n+1):
        f *= i
    return f

def squareRoot(n):
    return math.sqrt(n)

def power(a, b):
    return a ** b

n = int(input("Enter number: "))

print("Factorial:", factorial(n))
print("Square Root:", squareRoot(n))
print("Power (n^2):", power(n, 2))
