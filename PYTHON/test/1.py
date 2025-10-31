def is_multiple (n: int, m: int) -> bool:
    """Returns True if n is a multiple of m, False otherwise.

    >>> is_multiple(10, 5)
    True
    >>> is_multiple(10, 3)
    False
    >>> is_multiple(0, 1)
    True
    >>> is_multiple(5, 0)
    False
    """
    if m == 0:
        return False
    return n % m == 0
