# Enter your code here. Read input from STDIN. Print output to STDOUT
def eGCD(a,b):
    if b==0:
        return a,1,0
    d,x,y = eGCD(b, a%b)
    return d,y,x-(a//b)*y

A,B = map(int,input().split())
D,x0,y0 = eGCD(A,B)
p = B//D
q = A//D
c = set()
for k in [-x0//p,(-x0+p-1)//p,y0//q,(y0+q-1)//q]:
    for z in range(k-1,k+2):
        x = x0+z*p
        y = y0-z*q
        c.add((x,y))
x,y = min(c,key = lambda t: (abs(t[0])+abs(t[1]),t[0]>t[1]))
print(x,y,D)
