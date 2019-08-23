#include<stdio.h>
int main()
{
    long long  a,n,m,sc[200000],al,i,r[200000],f,l,k,count=0;
    
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        if(i==0)
        {
        sc[i]=a;
        count++;
        }
        else if(a!=sc[count-1])
        {
            sc[count]=a;
            count++;

        }
        

    }
    long long key=count-1;    
    scanf("%lld",&m);
    for(i=0;i<m;i++)
    {
        scanf("%lld",&al);
        int flag=1;
        f=0,l=key;
        while(f<l)
        {
         k=(f+l)/2;
       
        if(al>sc[k])
        {   
            l=k-1;
        }
        else if(al<sc[k])
        {   
            f=k+1;
            key=f;
        }
        else
            { printf("%lld\n",k+1);
                flag=0;
                key=k+1;
             break;
            }
    
        }
if(flag){
    if(f==l)
      
    
    {    
    if(f==0)
        { 
           if(al>=sc[0])   
            printf("%d\n",1);
            else 
            printf("%d\n",2);
            
        }        
    else if(al==sc[f] || al>sc[f])
        printf("%lld\n",f+1);
    
    else
        printf("%lld\n",f+2); 
    }  
    
else if(f>l)
{
if(l<=0)
{ 
           if(al>=sc[0])   
            printf("%d\n",1);
            else 
            printf("%d\n",2);
            
        }
                
    else if(al==sc[l] || al>sc[l])
        printf("%lld\n",l+1);
    
    else
        printf("%lld\n",l+2);
}     
}
        
      
    }
        
    }
    

