#include<stdio.h>
int main()
{ 
    int a[100],b,c,n,k,i,j,p,t,f,s=0; 
    scanf("%d",&p); 
    while(p--) 
    { 
        s=0; 
        scanf("%d",&f); 
        n=f-1; 
        for(i=0;i<n;i++) 
        { 
            scanf("%d",&a[i]); 
            
        } 
        for(i=0;i<n;i++) 
        { 
            for(j=0;j<n;j++) 
            { 
                if(a[i]<a[j]) 
                { 
                    t=a[i]; 
                    a[i]=a[j]; 
                    a[j]=t; 
                    
                } 
                
            } 
            
        } 
        for(i=0;i<n;i++) 
        { 
            for(j=i+1;j<n;j++) 
            { 
                if(a[i]==a[j]) 
                { 
                    for(k=j;k<n;k++) 
                    { 
                        a[k]=a[k+1]; 
                        
                    } 
                    j--; 
                    n--; 
                    
                } 
                
            } 
            
        } /* for(i=0;i<n-1;i++) { printf("%d ",a[i]); }*/ 
        for(i=0;i<n;i++) 
        { 
            if(a[i]+1!=a[i+1]) 
            { 
                s=1; 
                printf("%d
",a[i]+1); 
                break; 
                
            } 
            
        } 
        if(s==0) 
        { 
            printf("%d",a[n-1]+1); 
            
        } 
        
    } 
    
}