#include<stdio.h>
#include<string.h>
int main()
{ 
    char str[100]; 
    int i,n,max,temp; 
    scanf("%[^
]",str); 
    n=strlen(str); 
    for(i=0;i<n;i++) 
    { 
        if(i==0) 
        max=str[0]; 
        temp=str[i]; 
        if(temp>max) 
        max=temp; 
        
    } 
    printf("%c",max); 
    
}