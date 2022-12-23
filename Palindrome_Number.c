#include<stdio.h>
int main()
{
    int n,a,i,j,s=0,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        for(j=a;j>0;j=j/10)
        {
            b=j%10;
            s=s*10+b;
        }
        if(s==a)
        printf("True
");
        else
        printf("False
");
        s=0;
    }
}