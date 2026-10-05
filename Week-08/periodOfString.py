# Enter your code here. Read input from STDIN. Print output to STDOUT
S = input().strip()
n = len(S)

for p in range(1, n + 1):
    if n % p == 0:
        if S[:p] * (n // p) == S:
            print(p)
            break
