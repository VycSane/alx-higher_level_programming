#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    new_tuple = ()
    i, len1, len2 = 0, len(tuple_a), len(tuple_b)
    while i < 2:
        num1 = tuple_a[i] if i < len1 else 0
        num2 = tuple_b[i] if i < len2 else 0
        new_tuple += (num1 + num2,)
        i += 1
    return new_tuple
