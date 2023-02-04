#include<stdio.h>

int main(){
    char ch1[45];
    printf("Enter your name and see the magic\n");
    //scanf("%s",ch1);
    gets(ch1);
    //printf("Your name is %s",ch1);
    puts(ch1);
    printf("Done printing string");

    // gets is used to take input string with spaces.
    // puts used to put cursor on next line.


    
    return 0;
}