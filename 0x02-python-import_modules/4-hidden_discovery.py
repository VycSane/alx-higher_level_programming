#!/usr/bin/python3
from os import sys
from importlib import import_module


def main() -> int:
    names = dir(import_module("hidden_4"))
    names.sort()
    for name in names:
        if name[:2] != '__':
            print(name)
    return 0


if __name__ == '__main__':
    sys.exit(main())
