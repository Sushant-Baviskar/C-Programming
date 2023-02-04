#include<stdio.h>

/* Once a string is defined using char st[] = "Harry", it can't be
   reinitialized to something else.

   A string defined using pointers can be reinitialized */

int main(){
    char *ptr = "Harry bhai";
    ptr = "Sushant bhai";        // Reinitialization of string is possible!!!
    printf("%s",ptr); 

   /* char ptr[] = "Harry bhai";
    ptr = "Sushant bhai";         reinitialization of string not possible!!!
                                  program throws an error!!
    printf("%s",ptr); */

    
    

    
    return 0;
}