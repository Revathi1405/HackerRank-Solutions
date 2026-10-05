n = int(input())
a = list(map(float,input().split()))
mn = min(a)
mx = max(a)
buckets = [[] for _ in range(n)]
for x in a:
    if mx == mn:
        k = 0
    else:
        k = int((x-mn)/(mx-mn)*n)
        if k == n:
            k = n-1
    buckets[k].append(x)
for bucket in buckets:
    bucket.sort()
ans = []
for bucket in buckets:
    ans += bucket
if all(x.is_integer() for x in a):
    print(*[int(x) for x in ans])
else:
    print(*[f"{x:.2f}" for x in ans])