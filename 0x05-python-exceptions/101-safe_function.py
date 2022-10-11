#!/usr/bin/python3
import sys


def safe_function(fct, *args):
    try:
        res = fct()
        return res
    except Exception as err:
        err_msg = "Exception: " + err + "\n"
        sys.stderr.write(err_msg)
        return None
