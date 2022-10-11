#!/usr/bin/python3
import sys


def safe_print_integer_err(value):
    try:
        print("{:d}".format(value))
        return True
    except (ValueError, TypeError) as err:
        err_msg = "Exception: " + str(err) + "\n"
        sys.stderr.write(err_msg)
        return False
