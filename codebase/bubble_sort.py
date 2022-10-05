#!/bin/python3

import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# Write Your Code Here
numberOfSwaps=0
for j in range(0,n):
    for i in range(0,n-1):
        if(a[i]>a[i+1]):
            a[i],a[i+1]=a[i+1],a[i]
            numberOfSwaps+=1


print("Array is sorted in",numberOfSwaps,"swaps.")
print("First Element:",a[0])
print("Last Element:",a[n-1])
"""
Input
3
1 2 3

Output
Array is sorted in 0 swaps.
First Element: 1
Last Element: 3

"""
