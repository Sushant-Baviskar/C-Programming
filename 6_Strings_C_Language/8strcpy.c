// strcpy is the function used to copy the content of first string into second string passed to it.

#include<stdio.h>
#include<string.h>
int main(){
    char *source= "Harry";
    char target[30];
    strcpy(target,source);
    printf("Now target contains %s",source);
    
    return 0;
}