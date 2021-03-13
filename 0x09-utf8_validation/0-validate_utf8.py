#!/usr/bin/python3
"""
UTF-8 Validation
"""


def validUTF8(data):
    byte = 0
    for i in data:
        bin = format(i, '#010b')[-8:]
        if byte == 0:
            for bit in bin:
                if bit == "0":
                    break
                byte += 1
            if byte == 0:
                continue
            if byte > 4 or byte == 1:
                return False
        else:
            if bin[0] != "1" or bin[1] != "0":
                return False
        byte -= 1
    return byte == 0
