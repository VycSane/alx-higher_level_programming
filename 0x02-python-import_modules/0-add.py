#!/usr/bin/python3
from os import sys
from add_0 import add


def main() -> int:
    a = 1
    b = 2
    result = add(a, b)
    print("{} + {} = {}".format(a, b, result))
    return 0


if __name__ == '__main__':
    sys.exit(main())
