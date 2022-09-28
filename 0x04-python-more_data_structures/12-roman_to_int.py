#!/usr/bin/python3
def roman_to_int(roman_string):
    strg = roman_string
    l = len(strg) if strg not is None else 0
    if strg is None or type(strg) != str or l == 0:
        return 0
    rd = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}


