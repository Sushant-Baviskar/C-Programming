#include<stdio.h>
#include<string.h>

/* strlen is the function used to count the number of characters in the string
   excluding the null('\0') character.*/


int main(){
    char *st = "Harry";
    int a = strlen(st);
    printf("The length of string st is %d",a);

    
    return 0;
}