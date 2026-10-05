# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys
text = sys.stdin.read()
seen = 0
printed = 0
duplicates = []
for char in text:
    if 'a' <= char <= 'z':
        bit_index = ord(char) - ord('a')
        mask = 1 << bit_index
        if (seen & mask) and not (printed & mask):
            duplicates.append(char)
            printed |= mask
        seen |= mask 
print(" ".join(duplicates))
