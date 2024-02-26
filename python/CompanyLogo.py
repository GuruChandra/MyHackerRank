'''
A newly opened multinational brand has decided to base their company logo on the three most common characters in the company name. They are now trying out various combinations of company names and logos based on this condition. Given a string

, which is the company name in lowercase letters, your task is to find the top three most common characters in the string.

    Print the three most common characters along with their occurrence count.
    Sort in descending order of occurrence count.
    If the occurrence count is the same, sort the characters in alphabetical order.

For example, according to the conditions described above,

would have it's logo with the letters

.

Input Format

A single line of input containing the string

.

Constraints

has at least

    distinct characters

Output Format

Print the three most common characters along with their occurrence count each on a separate line.
Sort output in descending order of occurrence count.
If the occurrence count is the same, sort the characters in alphabetical order.

Sample Input 0

aabbbccde

Sample Output 0

b 3
a 2
c 2

Explanation 0

Here, b occurs times. It is printed first.
Both a and c occur

times. So, a is printed in the second line and c in the third line because a comes before c in the alphabet.

Note: The string
has at least distinct characters.'''


#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    s = input()
    a=[0]*26
    for i in range(len(s)):
        index =  ord(s[i])-97
        a[index]+=1;
    
    maxIndex =a.index(max(a))
    count=max(a)
    a[maxIndex]=-1;
    maxIndex2 =a.index(max(a))
    count2=max(a)
    a[maxIndex2]=-1;
    
    maxIndex3 =a.index(max(a))
    count3=max(a)
    a[maxIndex3]=-1;
    print(chr(maxIndex+97),  count)
    print(chr(maxIndex2+97),  count2)
    print(chr(maxIndex3+97),  count3)


