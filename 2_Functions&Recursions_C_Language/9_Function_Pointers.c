

#include<stdio.h>

int sum(int a, int b)
{
    return a+b;

}

int main(){

    int(*fptr)(int,int);    // Declaring a function pointer
    fptr=&sum;              // Creating a function pointer
    int d=(*fptr)(7,5);     // Dreferencing a function pointer

    printf("The value of d is %d\n",d);

    
    return 0;
}