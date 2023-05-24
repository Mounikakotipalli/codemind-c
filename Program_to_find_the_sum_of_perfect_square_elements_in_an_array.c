#include<stdio.h>
int main()
{ 
    int n,i,sum=0,j; 
    scanf("%d",&n); 
    int arr[n]; 
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&arr[i]); 
        
    } 
    for(i=0;i<n;i++) 
    { 
        for(j=1;j<=arr[i];j++) 
        { 
            if(j*j==arr[i]) 
            sum+=arr[i]; 
            
        } 
        
    } 
    printf("%d",sum); 
    
}