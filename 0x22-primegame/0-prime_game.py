#!/usr/bin/python3
"""
Prime Game
"""


def prims(n, primes):
    """
    Returns calculated primes
    """
    primers = primes[-1]
    if n > primers:
        for i in range(primers + 1, n + 1):
            if is_prime(i):
                primes.append(i)
            else:
                primes.append(0)


def is_prime(n):
    """
    Checks if a number n is a prime number
    """
    for i in range(2, int(n ** 0.5) + 1):
        if not n % i:
            return False
    return True


def isWinner(x, nums):
    """
    Returns: player that won most rounds otherwise None
    """
    if not nums or x < 1:
        return None

    wins = {"Maria": 0, "Ben": 0}
    primes = [0, 0, 2]
    prims(max(nums), primes)

    for round in range(x):
        sums = sum((i != 0 and i <= nums[round])for i in primes[
            :nums[round] + 1])

        if (sums % 2):
            winner = "Maria"
        else:
            winner = "Ben"

        if winner:
            wins[winner] += 1

    if wins["Maria"] > wins["Ben"]:
        return "Maria"
    elif wins["Ben"] > wins["Maria"]:
        return "Ben"
    else:
        return None
