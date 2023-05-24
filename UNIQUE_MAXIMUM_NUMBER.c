#include<stdio.h>
int main(){
    int n,i,j,arr[100],s,max=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        s=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                s=1;
                break;
            }
        }
        if(s!=1){
            k=1;
            if(arr[i]>max) 
            max=arr[i];
        }
    }
    if(k==1)
    printf("%d",max);
    else 
    printf("-1");
}