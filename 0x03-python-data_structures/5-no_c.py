#!/usr/bin/python3
def no_c(my_string):
    new_str = my_string
    i = 0
    for char in new_str:
        if char.lower() == 'c':
            new_str = new_str[:i] + new_str[i+1:]
        i += 1
    return new_str
