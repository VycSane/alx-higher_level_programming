#!/usr/bin/python3
def uppercase(str):
    for i in range(len(str)):
        ascii_value = ord(str[i])
        if (ascii_value <= 97 and ascii_value <= 122):
            str_copy += chr(ascii_value - 32)
    print("{}".format(str_copy))
