'''
You are given

words. Some words may repeat. For each word, output its number of occurrences. The output order should correspond with the input order of appearance of the word. See the sample input/output for clarification.

Note: Each input line ends with a "\n" character.

Constraints:

The sum of the lengths of all the words do not exceed


All the words are composed of lowercase English letters only.

Input Format

The first line contains the integer,
.
The next

lines each contain a word.

Output Format

Output

lines.
On the first line, output the number of distinct words from the input.
On the second line, output the number of occurrences for each distinct word according to their appearance in the input.

Sample Input

4
bcdef
abcdefg
bcde
bcdef

Sample Output

3
2 1 1

Explanation

There are
distinct words. Here, "bcdef" appears twice in the input at the first and last positions. The other words appear once each. The order of the first appearances are "bcdef", "abcdefg" and "bcde" which corresponds to the output.

'''

# PASSED 4/7 TEST CASES

# Enter your code here. Read input from STDIN. Print output to STDOUT
noOfLines = int(input())
stringCount=[0]*noOfLines
stringList =[]
currentIndex = 0
for i in range(noOfLines):
    strng = input()
    #stringList[i] =strng
    if strng in stringList:
        index = stringList.index(strng)
        stringCount[index]+=1
        #currentIndex= i
    else:
        stringList.append(strng)
        index = stringList.index(strng)
        stringCount[index]+=1
        currentIndex= index



print(len(stringCount[:currentIndex+1]))
print(*stringCount[:currentIndex+1])
