#include<stdio.h>

int main(){
    char str[] = "Harry";
    char *ptr =  &str[0];
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    
    return 0;
}