#!/usr/bin/python3


"""lockbox"""


def canUnlockAll(boxes):
    """can unlock all boxes"""
    index = boxes[0]
    for i in range(1, len(boxes)):
        if i in index:
            index += boxes[i]
    for i in range(1, len(boxes)):
        if i in index:
            index += boxes[i]
    list(set(index))
    key = 1
    for i in range(1, len(boxes)-1):
        if i not in index:
            key = 0
    if key == 1:
        return True
    else:
        return False
