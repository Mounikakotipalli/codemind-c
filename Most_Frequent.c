#include<stdio.h>
int main(){
    int n,i,j,count,temp,max=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j)
            count++;
        }
        if(count>max){
            max=count;temp=arr[i];
        }
        else if(count==max){
            if(arr[i]<temp)
            temp=arr[i];
        }
        
    }
    printf("%d",temp);
    
}