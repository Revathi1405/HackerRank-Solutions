# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys
s = sys.stdin.read()
for length in range(len(s) - 1, 0, -1):
        if s[:length] == s[-length:]:
            print(s[:length])
            break
