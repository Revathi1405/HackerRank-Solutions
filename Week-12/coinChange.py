# Enter your code here. Read input from STDIN. Print output to STDOUT
V,N = map(int,input().split())
coins = list(map(int,input().split()))
dp = [10**9]*(V+1)
used = [-1]*(V+1)
dp[0] = 0
for i in range(1,V+1):
    for c in coins:
        if c<=i and dp[i-c]+1<dp[i]:
            dp[i] = dp[i-c]+1
            used[i] = c
if dp[V] == 10**9:
    print(-1)
else:
    ans = []
    x = V
    while x>0:
        ans.append(used[x])
        x -= used[x]
    #print(*ans) printing the coins used
    print(dp[V])
