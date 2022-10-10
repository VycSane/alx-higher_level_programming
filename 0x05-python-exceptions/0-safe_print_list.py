#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    while True:
        try:
            print("{:d}".format(my_list[x]), end='')
            x += 1
        except (IndexError, TypeError):
            break
    print("")

