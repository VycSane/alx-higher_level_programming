#!/usr/bin/python3
def roman_to_int(roman_string):
    if roman_string is None or type(roman_string) != str:
        return 0
    if len(roman_string) == 0:
        return None
    rd = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    tmp = list(map(lambda x: x, roman_string))
    stack = []
    res = 0
    while len(tmp) > 0:
        a = rd[tmp.pop()]
        b = rd[tmp.pop()] if len(tmp) > 0 else 0
        c = a - b if a > b else a + b
        stack.append(c)
    for val in stack:
        res += val
    return res
