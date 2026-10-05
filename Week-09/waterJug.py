# Enter your code here. Read input from STDIN. Print output to STDOUT
import math

A,B,T = map(int,input().split())
gcd = math.gcd(A,B)
if T%gcd==0:
    print("YES")
else:
    print("NO")
