n=int(input())
l=list(map(int,input().strip().split()))
l1=set(l)
f=l.count
def k(k1):
    return f(k1)//2
l2=list(map(k,l1))
print(sum(l2))






