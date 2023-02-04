// A switch-case-default these three keywords go together to make up the control statement

// Rules:
   // Case value must be an integer or a character.(not float also)**
   // 'break' is not necessary.


#include<stdio.h>

int main(){
    int i;
    printf("Enter i\n");
    scanf("%d",&i);

    switch(i)  
    {
        case 7:
        printf("Value is 7");
        break;

        case 8:
        printf("Value is 8");
        break;

        case 9:
        printf("Value is 9");
        break;

        default:
        printf("Value is not present");
        


    }
    
    return 0;

    // Difference between switch and if:

    // Switch statement can't evaluate float conditions.
    // Relational operators are also not allowed in switch statements.
    // case no. inside switch statement can't be a variable.
}