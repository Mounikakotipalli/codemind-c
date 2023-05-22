#include<stdio.h>
int main()
{ 
    int n,sum=0,prod=1,rem; 
    scanf("%d",&n); 
    int x=n; 
    while (n>0) 
    { 
        rem=n%10; 
        sum=sum+rem; 
        n/=10; 
    } 
    while (x>0) 
    { 
        int rem2=x%10; 
        prod=prod*rem2; 
        x/=10; 
    } 
    if (sum==prod) 
    { 
        printf("Spy Number"); 
    } 
    else 
    { 
        printf("Not Spy Number"); 
        
    } 
}