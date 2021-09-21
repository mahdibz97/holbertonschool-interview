#!/usr/bin/python3
''' boooooo '''


def makeChange(coins, total):
    ''' boooooo '''
    if total <= 0:
        return 0
    if len(coins) <= 0:
        return -1
    rest = total
    num_coins = 0
    while rest != 0:
        max_coin = max(coins)
        num = rest // max_coin
        rest = rest - (max_coin * num)
        num_coins += num
        coins.pop(coins.index(max_coin))
        if len(coins) == 0 and rest > 0:
            return -1
    return num_coins
