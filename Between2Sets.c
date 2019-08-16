#include<stdio.h>
int main()
{
    int i,j,a[100],a2[100],n,m,count=0,flag=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<m;i++)
    {
        scanf("%d",&a2[i]);
    }
    for(i=a[n-1];i<=a2[0];i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(i%a[j]==0)
            flag++;
            
            
        }
        if(flag==n)
        {
            flag=0;
            for(j=0;j<m;j++)
            {
                if(a2[j]%i==0)
                flag++;    
            }
            if(flag==m)
            count++;
        }
        
        
        
    }
    printf("%d",count);
    return 0;


}
