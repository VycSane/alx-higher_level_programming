#!/usr/bin/python3
def remove_char_at(str, n):
	i = 0
	str_copy = ''
	while i < len(str):
		if (i == n):
			continue
		str_copy[i] = str[i]
		i += 1
	return str_copy
