n=int(input())
l=list(map(int,input().split()))
l1=[]
large=0
f=max

for i in l:
    k1=0;k2=0

    if(i not in l1):

        l1.append(i)
        for j in l:
            if(i-j==1 or i==j):
                k1+=1
            if(i-j==-1 or i==j):
                k2+=1 
        large=max(large,k1,k2)
        if(large==5):
            break

        
print(large)            




       
