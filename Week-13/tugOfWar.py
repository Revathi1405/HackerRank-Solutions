# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
a = list(map(int,input().split()))
t = sum(a)
k = n//2
ans = float('inf')
def solve(i,count,s):
    global ans
    if count == k:
        ans = min(ans,abs(t-2*s))
        return
    if i == n:
        return
    solve(i+1,count+1,s+a[i])
    solve(i+1,count,s)
solve(0,0,0)
if n%2:
    k = n//2+1
    ans = float('inf')
    solve(0,0,0)
print(ans)
