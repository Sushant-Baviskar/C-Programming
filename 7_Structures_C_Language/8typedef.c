#include<stdio.h>
#include<string.h>

typedef struct employee   
{
    int code;
    float salary;
    char name[10];
}emp;  


int main(){
    emp e1;
    emp *ptr;

    ptr = &e1;
    //(*ptr).code = 101; 
    // you can also write : ptr->code = 101;  ->  is arrow operator
    (*ptr).code = 101;

    printf("%d",ptr->code);
    
    return 0;
}