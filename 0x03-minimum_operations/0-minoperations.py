#!/usr/bin/python3
"""
min operation
"""


def minOperations(n):
    # Function that returns the minimum number of operations
    if n <= 1:
        return 0
    c = 0
    i = 2
    while n > 1:
        if n % i == 0:
            n //= i
            c += i
            i = 1
        i += 1
    return c
