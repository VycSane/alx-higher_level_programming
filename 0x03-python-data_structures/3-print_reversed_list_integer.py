#!/usr/bin/python3
def print_reversed_list_integer(my_list=[]):
    if my_list == None:
        return None
    rev_list = my_list.copy()
    rev_list.reverse()
    for i in rev_list:
        print("{:d}".format(i))
