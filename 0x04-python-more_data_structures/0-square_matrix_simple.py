#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    new_matrix = []
    for idx, row in enumerate(matrix):
        new_matrix.append([])
        for val in row:
            new_matrix[idx].append(val ** 2)
    return new_matrix
