#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int x=(a*(a+1)*((2*a)+1))/6;
    int y=(a*(a+1))/2;
    int z=y*y;
    int m=z-x;
    printf("%d",m);
}