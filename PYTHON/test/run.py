# # Calculate factorial
# def factorial(n):
#     return n * factorial(n - 1) if n else 1
# print("Factorial of 5 is:", factorial(5))

# Fibonacci series with recursion
def fibonacci(n):
    return n if n <= 1 else fibonacci(n - 1) + fibonacci(n - 2)
print("Fibonacci series up to 10 terms:")
for i in range(10):
    print(fibonacci(i), end=" ")
print()
