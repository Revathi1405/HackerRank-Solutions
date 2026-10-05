# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
words = input().split(",")
p = input().strip()
result = []
for w in words:
    a = ''.join(c for c in w if c.isupper())
    if a.startswith(p):
        result.append((a,w))
result.sort()
if result:
    for a,w in result:
        print(w)
else:
    print("No match found")
