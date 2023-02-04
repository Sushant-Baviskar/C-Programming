#include<stdio.h>
#include<string.h>
struct employee   
{
    int code;
    float salary;
    char name[10];
};  

int main(){
    struct employee e1,e2,e3;
    
    printf("Enter the value of code for e1\n");
    scanf("%d\n",&e1.code);
    printf("Enter the value of salary for e1\n");
    scanf("%f\n",&e1.salary);
    printf("Enter the name for e1\n");
    scanf("%s\n",e1.name);

    printf("Enter the value of code for e2\n");
    scanf("%d\n",&e2.code);
    printf("Enter the value of salary for e2\n");
    scanf("%f\n",&e2.salary);
    printf("Enter the name for e2\n");
    scanf("%s\n",e2.name);

    printf("Enter the value of code for e3\n");
    scanf("%d\n",&e3.code);
    printf("Enter the value of salary for e3\n");
    scanf("%f\n",&e3.salary);
    printf("Enter the name for e3\n");
    scanf("%s\n",e3.name);
    
    return 0;
}