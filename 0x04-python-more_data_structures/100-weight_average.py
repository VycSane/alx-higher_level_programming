#!/usr/bin/python3
def weight_average(my_list=[]):
    if my_list is None or len(my_list) == 0:
        return 0
    mul_arr = list(map(lambda x: x[0] * x[1], my_list))
    weight_arr = list(map(lambda x: x[1], my_list))
    mul_arr_sum = 0
    weight_arr_sum = 0
    for i, j in zip(mul_arr, weight_arr):
        mul_arr_sum += i
        weight_arr_sum += j
    return mul_arr_sum / weight_arr_sum
