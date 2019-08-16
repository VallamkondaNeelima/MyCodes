#include<stdio.h>
int main()
{
    int i,count=0,j,n,m,d,a[101],sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&d,&m);
    for(i=0;n-i>=m;i++)
    {
        sum=0;
        for(j=i;j<i+m;j++)
        {
            sum=sum+a[j];
        }
        if(sum==d)
        count++;
        
        
    }
    printf("%d",count);
    return 0;
}
