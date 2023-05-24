#include<stdio.h>
#include<string.h>
int fun(char ch)
{ 
    char str[100]={'0','1','2','3','4','5','6','7','8','9'};
    int a; 
    for(a=0;str[a]!=NULL;a++) 
    { 
        if(str[a]==ch) 
        return 1; 
        
    } 
    return 0; 
    
} 
int main() 
{ 
    int t; 
    scanf("%d",&t); 
    int i; 
    for(i=0;i<t;i++) 
    { 
        char s[1000]; 
        scanf("%s",s); 
        int j,k=0; 
        for(j=0;s[j]!=NULL;j++) 
        { 
            //printf("%s",s[j]); 
            if(fun(s[j])) 
            { 
                //printf("1"); 
                k=1; 
                break; 
                
            } 
            
        } 
        if(k==1) 
        printf("Yes
"); 
        else 
        printf("No
"); 
        
    } 
    
}