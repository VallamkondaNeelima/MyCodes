#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>=38)
        {
        if((a/5+1)*5-a<3)
        printf("%d\n",(a/5+1)*5);
        else 
        printf("%d\n",a);
        }
        
        else 
        printf("%d\n",a);

    }
}
