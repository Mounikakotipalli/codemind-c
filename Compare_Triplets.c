#include<stdio.h>
int main()
{ 
    int arr1[100],arr2[100],i,bob=0,alice=0; 
    scanf("%d%d%d",&arr1[0],&arr1[1],&arr1[2]); 
    scanf("%d%d%d",&arr2[0],&arr2[1],&arr2[2]); 
    for(i=0;i<3;i++) 
    { 
        if(arr1[i]<arr2[i]) 
        bob++; 
        else if(arr1[i]>arr2[i]) 
        alice++; 
        
    } 
    printf("%d %d",alice,bob); 
    
}