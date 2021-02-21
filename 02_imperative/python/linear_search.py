#!/usr/bin/env python

def linear_search(alist, key):
    i = 0
    found = False

    while i < len(alist) and not found:
        if alist[i] == key:
            found = True
        else:
            i = i+1

    return found

my_list = [1, 2, 32, 8, 17, 19, 42, 13, 0]
search_for = 3
print("Searching for ", 3, " in ", my_list)
print("Does it exist?", linear_search(my_list, search_for))
