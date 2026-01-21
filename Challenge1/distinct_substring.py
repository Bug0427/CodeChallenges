'''
Problem: Longest Substring with At Most K Distinct Characters

Description: Write a program that, given a string (s) and an integer (k), 
returns the length of the longest substring that contains at most k 
distinct characters. You are not asked to return the substring itself, 
only its length.

🎯 Constraints
	•	1 ≤ len(s) ≤ 200,000
	•	0 ≤ k ≤ 52
	•	Characters may include lowercase and uppercase English letters
	•	Time target: O(n)
	•	Space target: O(k)

Language: Python
*************************************************************************'''


def validate(s, k):  # sourcery skip: min-max-identity
    while (not s.isalpha()) or len(s) <= 1 or (len(s) >= 200000): 
        s = input('Please input any random string: ')

    while (k < 0) or (k > 52):
        k = int(input('Please input a number between 0 and 52: '))
        
    if k > len(s): k = len(s)
    return s, k

def index(ch:str) -> int:  # sourcery skip: assign-if-exp, reintroduce-else
    if 'A' <= ch <= 'Z': 
        return ord(ch)-ord('A')
    return 26+(ord(ch)-ord('a'))

def substring(s: str, k: int) ->int:
    left = 0
    right = 0
    count = [0]*52
    length = 0
    unique = 0
    
    if not s or k == 0:
        return 0
    if k >= 52:
        return len(s)
    
    for right in range(len(s)):
        r = index(s[right])
        if count[r] == 0: unique+=1
        count[r]+=1
        
        while unique > k:
            l = index(s[left])
            count[l]-=1
            if count[l] ==0: unique-=1
            left+=1
        length = max(length, right-left +1)
    return length


def main():
    s = input('Please input any random string: ')
    k = int(input('Please input a number between 0 and 52: '))
    newS, newK = validate(s, k)
    print (substring(newS, newK))

if __name__== "__main__":
    main()