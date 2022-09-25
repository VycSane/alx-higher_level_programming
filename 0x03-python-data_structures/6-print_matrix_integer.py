#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    first_time = True
    for i in matrix:
        for j in i:
            print("{}{:d}".format(" " if not first_time else "", j), end="")
            first_time = False
        first_time = True
        print()
