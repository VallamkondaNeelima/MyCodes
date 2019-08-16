#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long n,i,j,c,k;
    int a[1000000],a2[5]={0};
    scanf("%lld",&n);
    //a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        a2[a[i]-1]++;
    }
     c=a2[0];
        for(i=1;i<5;i++)
        {
            if(a2[i]>c)
            {
                c=a2[i];
                k=i;

            }
}
    printf("%d",k+1);
        
    return 0;            
                                    
}
