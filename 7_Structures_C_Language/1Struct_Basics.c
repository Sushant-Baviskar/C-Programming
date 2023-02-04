/* Arrays and strings -> similar data (int,float,char)
   structures         -> dissimilar data */

#include<stdio.h>
struct employee   // This declares new user defined data type
{
    int code;
    float salary;
    char name[10];
};  // semicolon is imp here!!

int main(){
    struct employee e1;  // creating a structure variable
    e1.code = 100;       // dot(.) operator is called "structure member operator".
                         // used between structure name and member name.
    e1.salary = 34.454;
    // e1.name = "Harry"; --> won't work
    strcpy(e1.name,"Harry");

    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);

    /* Structure in C is a collection of variables of different types
       under a single name. */

    
    return 0;
}