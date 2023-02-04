#include<stdio.h>
struct employee   
{
    int code;
    float salary;
    char name[10];
};  

void showRef(struct employee *e)
{
    (*e).name[0] = 'P';
    printf("The code of employee is %d\n",(*e).code); // or e->code
    printf("The salary of employee is %f\n",(*e).salary);// or e->salary
    printf("The name of employee  is %s\n",(*e).name);// or e->name

    (*e).code = 35;   // can change in main because values are not copied !!


}


int main(){
    struct employee harry = {34,500.40,"Harry"};
    showRef(&harry);   // changed values because address is passed!!

    printf("The code of harry  is %d\n",harry.code);
    printf("The salary of harry is %f\n",harry.salary);
    printf("The name of harry is %s\n",harry.name);


    
    return 0;
}