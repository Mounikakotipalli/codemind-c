#include<stdio.h>
int main()
{
    int n,i,j,k,s,b,count=0;
    scanf("%d",&n);
    for(j=n+1;j>0;j++)
    {
        s=0;
        for(i=j;i>0;i=i/10)
        {
            b=i%10;s=s*10+b;
            
        }
        if(s==j)
        {
            count=0;
            for(k=1;k<=j;k++)
            {
                if(j%k==0)
                count++;
                
            }
            if(count==2)
            {
                printf("%d",j);
                break;
                
            }
            
        }
    }
}