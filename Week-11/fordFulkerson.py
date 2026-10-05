# Enter your code here. Read input from STDIN. Print output to STDOUT
V,E = map(int,input().split())
g = [[0]*V for _ in range(V)]
for _ in range(E):
    u,v,c = map(int,input().split())
    g[u][v] += c
ans = 0
while True:
    seen = [0]*V
    def dfs(u,f):
        if u==V-1: 
            return f
        seen[u] = 1
        for v in range(V):
            if not seen[v] and g[u][v]:
                x = dfs(v,min(f,g[u][v]))
                if x:
                    g[u][v] -= x
                    g[v][u] += x
                    return x
        return 0
    f = dfs(0,10**18)
    if not f: 
        break
    ans += f
print(ans)
