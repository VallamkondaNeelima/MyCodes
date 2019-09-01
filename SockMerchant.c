#include<stdio.h>
int main()
{
    int sum=0,a[100],i,n,j,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        count=1;
        if(a[i]!=0){
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j] && a[j]!=0)
            {
                a[j]=0;
                count+=1;
        }
        }
        sum+=count/2;
        }
     }
    printf("%d",sum);
}
