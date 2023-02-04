#include<stdio.h>

int main(){
    char s[34];
    printf("Enter your name:");
    scanf("%s",&s[0]); // Either write s or &s[0] don't write &s !!!
    printf("Your name is %s",s);
    
    return 0;
}