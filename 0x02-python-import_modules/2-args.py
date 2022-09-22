#!/usr/bin/python3
from os import sys


def main() -> int:
    argv = sys.argv
    arg_len = len(argv) - 1
    print("{} arguments{}".format(arg_len,
          ":" if arg_len > 0 else "."))
    if arg_len > 0:
        i = 1
        for arg in argv[1:]:
            print("{}: {}".format(i, arg))
            i += 1
    return 0


if __name__ == '__main__':
    sys.exit(main())
