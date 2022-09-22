#!/usr/bin/python3
from os import sys


def main() -> int:
    argv = sys.argv
    res = 0
    for arg in argv[1:]:
        res += int(arg)
    print(res)
    return 0


if __name__ == '__main__':
    sys.exit(main())
