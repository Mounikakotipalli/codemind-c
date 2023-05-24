#include<stdio.h>
int main()
{ 
    int n; 
    scanf("%d",&n); 
    int arr[n],i,c=0,k=0; 
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&arr[i]); 
        if(arr[i]%2==0) 
        c++; 
        else if(arr[i]%2==1) 
        k++; 
        
    } 
    printf("%d %d",c,k);
    
}