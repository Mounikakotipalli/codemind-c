#include<stdio.h>
int main()
{ 
    int n,a; 
    scanf("%d",&n); 
    int arr[n],i,sum=0; 
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&arr[i]); 
        
    } 
    scanf("%d",&a); 
    for(i=0;i<n;i++) 
    { 
        if(arr[i]<=a) 
        sum+=1; 
        else 
        sum+=2; 
        
    } 
    printf("%d",sum);
}