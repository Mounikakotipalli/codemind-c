#include<stdio.h>
int main()
{
    int l,b,w,c,ai,ao,al,tc;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ai=l*b;
    ao=((2*w+l)*(2*w+b));
    al=ao-ai;
    tc=c*al;
    printf("%d",tc);
}