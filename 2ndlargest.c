#include<stdio.h>
int main()
{	
	int l,a1=-999,a,n,i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(i==0)
		{
			l=a;
		
		}
		
		else if(a>a1)
		{
			if(a>a1 && a<l)
			{
			
			a1=a;
			
			}
			else if(a>l)
			{
			a1=l;
			l=a;
			}
		}
			else
			continue;
		
	}
	
printf("%d",a1);	
}
