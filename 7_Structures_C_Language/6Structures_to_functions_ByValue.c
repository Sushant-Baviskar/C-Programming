#include<stdio.h>
struct employee   
{
    int code;
    float salary;
    char name[10];
};  

void show(struct employee e)
{
    e.name[0] = 'P';
    e.code = 35;
    printf("The code of employee is %d\n",e.code);
    printf("The salary of employee is %f\n",e.salary);
    printf("The name of employee  is %s\n",e.name);

      // can't change in main because values are copied !!


}


int main(){
    struct employee harry = {34,500.40,"Harry"};
    show(harry);

    printf("The code of harry  is %d\n",harry.code);
    printf("The salary of harry is %f\n",harry.salary);
    printf("The name of harry is %s\n",harry.name);


    
    return 0;
}