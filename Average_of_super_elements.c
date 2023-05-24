#include<stdio.h>
int main()
{ 
    int n,i,j,c=1,s,arr[100],k,l,sum=0; 
    float ans; 
    scanf("%d",&n); 
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&arr[i]); 
        
    } 
    for(i=0;i<n;i++) 
    { 
        c=1; 
        for(j=i+1;j<n;j++) 
        { 
            if(arr[i]==arr[j]) 
            { 
                c++; 
                for(k=j;k<n;k++) 
                { 
                    arr[k]=arr[k+1]; 
                    
                } 
                n--; 
                j--; 
                
            } 
            
        } 
        if(arr[i]==c) 
        { 
            sum+=arr[i]; 
            l++; 
            s=1; 
            
        } 
        
    } 
    ans=(float) sum/l; 
    if(s!=1) 
    printf("-1"); 
    else 
    printf("%.2f",ans); 
    
}