#include<stdio.h>
#include<string.h>

struct employee   
{
    int code;
    float salary;
    char name[10];
};  


int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    //(*ptr).code = 101; 
    // you can also write : ptr->code = 101;  ->  is arrow operator
    (*ptr).code = 101;
    ptr->salary = 50.21;
    strcpy(ptr->name,"Harry");

    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);
    
    return 0;
}