#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d%d",&n,&a);
    for(i=1;i<=a;i++)
    {
        int x=n*i;
        printf("%d x %d = %d",n,i,x);
        printf("
");
    }
}