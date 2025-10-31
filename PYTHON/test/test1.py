# Swap two numbers (with temp variable)
a = 5 
b = 10
temp = a
a = b
b = temp
print("After swapping with temp variable: a =", a, ", b =", b)

# Swap two numbers (without temp variable)
a = 5
b = 10
a, b = b, a
print("After swapping without temp variable: a =", a, ", b =", b)

# Calculate factorial
def factorial(n):
    return n * factorial(n - 1) if n else 1
print("Factorial of 5 is:", factorial(5))

# Check prime number
def is_prime(num):
    return num > 1 and all(num % i for i in range(2, int(num**0.5) + 1))

number = 7
print(f"Is {number} a prime number? {is_prime(number)}")

# Print Fibonacci series
def fibonacci(n):
    a, b = 0, 1
    return [a := (a := b, b := a + b)[0] for _ in range(n)]
print("Fibonacci series:", fibonacci(10))

# Find factorial using loop 
def factorial_loop(n):
    result = 1
    for i in range(1, n + 1): result *= i
    return result
print("Factorial of 5 using loop is:", factorial_loop(5))

