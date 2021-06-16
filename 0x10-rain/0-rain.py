#!/usr/bin/python3
"""
rain function
"""


def rain(walls):
    """
    Given a list of non-negative integers representing walls of width 1,
    calculate how much water will be retained after it rains.
    """
    if not walls or len(walls) < 3:
        return 0
    rainwater = 0
    for i in range(1, len(walls) - 1):
        left_border = max(walls[:i])
        right_border = max(walls[i + 1:])
        min_border = min(left_border, right_border)
        if walls[i] < min_border:
            rainwater += min_border - walls[i]
    return rainwater
