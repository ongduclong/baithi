#include<stdio.h>
#include <string.h>

void upperCase(char s[]){
    int i,n;
    n=strlen(s);
    fflush(stdin);
    for(i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;
    }
    printf("%s",s);
}
int main()
{
    char s[50];
    printf("Prototype: voidupperCase(char s[])");
    printf("\n Input   : ");
    gets(s);
    printf("\n Output  : ");
    upperCase(s);
    
    return 0;
}

