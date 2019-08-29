a=list(map(int,input().split()))
if(a[3]-a[1]!=0):

    if((a[0]-a[2])/(a[3]-a[1])>0 and (a[0]-a[2])%(a[3]-a[1])==0):
        print("YES")
    else:
        print("NO")
else :
    if(a[0]!=a[2]):
        print("NO")
    else:
        print("YES")            
