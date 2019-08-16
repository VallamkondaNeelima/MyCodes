#include<stdio.h>
int main()
{
    long long int n,i,a[10000],max,j=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    
    }
    max=a[0];

    
        for(i=1;i<n;i++)
        {
            if(max<a[i])
            {
                max=a[i];
                j++;
                
            }
        }
        max=a[0];
        
        for(i=1;i<n;i++)
        {
            if(max>a[i])
            {
                max=a[i];
                k++;
            }
        }
    
    printf("%d %d",j,k);
    return 0;
    
}
