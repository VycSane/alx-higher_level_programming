#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary is None or len(a_dictionary) == 0:
        return None
    highest, best = 0, None
    for key, val in a_dictionary.items():
        if val > highest:
            highest = val
            best = key
    return best
