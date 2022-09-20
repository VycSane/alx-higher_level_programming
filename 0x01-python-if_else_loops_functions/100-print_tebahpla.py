#!/usr/bin/python3
for i in range(26):
    print("{}".format(chr(90 + 32 - i) if i % 2 == 0 else chr(90 - i)), end="")
