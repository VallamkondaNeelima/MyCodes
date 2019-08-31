n=int(input())
l=list(map(int,input().strip().split()))
l1=set(l)
f=l.count
l2=list(map(lambda x:f(x)//2,l1))
print(sum(l2))






