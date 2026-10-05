# Enter your code here. Read input from STDIN. Print output to STDOUT
def binary(x,y):
    if x==0: 
        return y
    if y==0: 
        return x
    count=0
    while x%2==0 and y%2==0:
        x//=2
        y//=2
        count +=1
    while x%2==0:
        x//=2
    while y%2==0:
        y//=2
    while x!=y:
        if x>y:
            x = x-y
            while x%2==0:  
                x//= 2
        else:
            y = y-x
            while y%2==0:
                y//=2
    return x*(2**count)

a,b = map(int,input().split())
print(binary(a,b))
