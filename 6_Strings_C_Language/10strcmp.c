#include<stdio.h>
#include<string.h>

/* This function is used to compare two strings
   returns 0 if strings are equal.

   negative value if first string's mismatching characters's ASCII value is not 
   greater than second string's corresponding mismatching character.

   otherwise returns positive value.  */

int main(){
    char st1[45] = "Hel";
    char *st2 = "Helo";
    int val = strcmp(st1,st2);
    printf("Now the val is %d",val);


    
    return 0;
}