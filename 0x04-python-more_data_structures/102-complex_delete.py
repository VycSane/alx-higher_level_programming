#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    ref_list = list(a_dictionary.items())
    for tup in ref_list:
        if tup[1] == value:
            del a_dictionary[tup[0]]
    return a_dictionary
