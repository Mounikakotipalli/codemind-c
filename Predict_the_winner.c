#include<stdio.h>
int main(){
    int n,i,sum=0,add=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0)
        sum+=arr[i];
        else add+=arr[i];
    }
    if((sum-add)%4==0)
    printf("X");
    else
    printf("Y");
}