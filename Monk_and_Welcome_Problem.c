#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&arr2[i]);
        printf("%d ",arr1[i]+arr2[i]);
        
    }
    
}