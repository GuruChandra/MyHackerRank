#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countSwaps' function below.
#
# The function accepts INTEGER_ARRAY a as parameter.
#

def countSwaps(a):
    counter = 0;
    # Write your code here
    for i in range(len(a)):
        for j in range(1,len(a),1):
            if a[j-1] > a[j]:
               # print(a[j-1], a[j])
                a[j], a[j-1]=a[j-1], a[j]
                counter=counter+1
    print(f'Array is sorted in {counter} swaps.')
    print(f'First Element is: {a[0]}')
    print(f'Last Element is: {a[-1]}')
    print(a)
if __name__ == '__main__':
    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    countSwaps(a)
