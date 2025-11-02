def sum_to(n: int) -> int:
    if n == 1:
        return 1
    return sum_to(n - 1) + n

print(sum_to(4))
