#include<stdio.h>

int main(){
     char *ptr = "Harry Bhai";
    //char ptr[] = "Harry Bhai";
   ptr = "Sushant Bhai";
    printf("%s\n",&ptr[0]);
    printf("%s\n",ptr);
     
    return 0;
}