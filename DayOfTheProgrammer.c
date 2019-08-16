#include<stdio.h>
int main()
{
    int y,i,sum=0,k;
    scanf("%d",&y);
    for(i=1;i<13;i++)
    {
        if(y==1918)
        k=13;
        else
        k=0;
        if(256+k-sum > 31)
        {
        
        if(i<8)
        {
            if(i==2)
            {
                if(y%4==0)
                {
                    if(y>1918)
                    {
                        if(y%100==0)
                        {
                            if(y%400==0)
                            sum+=29;
                            else
                            sum+=28;
                            
                        }
                        else
                        sum+=29;
                    }
                    else
                    sum+=29;
                    
                    }
                    else
                    sum+=28;    
            }
            else if(i%2==0)
            sum+=30;
            else
            sum+=31;
        }
        else
        {
            if(i%2==0)
            sum+=31;
            else
            sum+=30;
        }
        }
        else
        break;
    }
    printf("%d.%02d.%d",256+k-sum,i,y);
    
}
