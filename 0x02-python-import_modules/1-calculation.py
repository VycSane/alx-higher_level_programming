#!/usr/bin/python3
from calculator_1 import add, sub, mul, div
from os import sys


def main() -> int:
    a = 10
    b = 5
    print("{} + {} = {}".format(a, b, add(a, b)))
    print("{} - {} = {}".format(a, b, sub(a, b)))
    print("{} * {} = {}".format(a, b, mul(a, b)))
    print("{} / {} = {}".format(a, b, div(a, b)))
    return 0


if __name__ == '__main__':
    sys.exit(main())
