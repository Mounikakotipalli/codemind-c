#include<stdio.h>
int main()
{ 
    int n; 
    scanf("%d",&n); 
    int arr[n],i,s,a; 
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&arr[i]); 
        
    } 
    scanf("%d",&a); 
    for(i=0;i<n;i++) 
    { 
        if(arr[i]==a) 
        { 
            printf("%d",i); 
            s=1; 
            
        } 
        
    } 
    if(s!=1) 
    printf("-1"); 
    
}