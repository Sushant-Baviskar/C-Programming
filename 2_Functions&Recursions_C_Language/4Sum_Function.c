#include<stdio.h>
/* sum is a function which takes a and b a input and returns an integer as an
   output */
int sum(int a, int b);


int main(){
    int c;
    c = sum(2,5); // function call
    printf("The value of c is %d\n",c);
    
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}