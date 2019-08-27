#include<stdio.h>
int main()
{
    int i,a[3],b[3],a1=0,b1=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        a1++;
        else if(a[i]<b[i])
        b1++;
    }
    printf("%d %d",a1,b1);

}
