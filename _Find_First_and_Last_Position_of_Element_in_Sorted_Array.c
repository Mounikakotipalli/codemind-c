#include<stdio.h>
int main()
{ 
    int n,i,a,s,d,k=0; 
    scanf("%d",&n); 
    int arr[n]; 
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&arr[i]); 
        
    } 
    scanf("%d",&a); 
    for(i=0;i<n;i++) 
    { 
        if(arr[i]==a) 
        { 
            k++; 
            if(k==1) 
            printf("%d ",i); 
            s=1; 
            d=i; 
            
        } 
        
    } 
    if(s==1) 
    printf("%d",d); 
    if(s!=1) 
    printf("-1 -1");
    
}