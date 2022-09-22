#!/usr/bin/python3
from os import sys
import hidden_4


def main() -> int:
    names = dir("hidden_4")
    names.sort()
    for name in names:
        if name[:2] != '__':
            print(name)
    return 0


if __name__ == '__main__':
    sys.exit(main())
