#include<stdio.h>

// Printing string character by characters that is using %c and for loop.

int main(){
    char str1[] = "Harry";
    for(int i=0;i<6;i++)
    {
        printf("%c",str1[i]);
    }
    
    return 0;
}