#include<stdio.h>
int main()
{ 
    int n,i,j,z,k,b,s,count; 
    scanf("%d",&n); 
    for(i=n+1;i>0;i++) 
    { 
        s=0; 
        for(j=i;j>0;j=j/10) 
        { 
            b=j%10; 
            s=s*10+b; 
            
        } 
        if(s==i) 
        { 
            count=0; 
            for(z=1;z<=s;z++) 
            { 
                if(s%z==0) 
                count++; 
                
            } 
            if(count==2) 
            { 
                printf("%d",s); 
                break; 
                
            } 
            
        } 
        
    } 
    
}