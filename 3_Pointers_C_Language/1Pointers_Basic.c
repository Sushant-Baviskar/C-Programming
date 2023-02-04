#include<stdio.h>
/* Memory block i.e. variable get some space in RAM and we can think that as a block.
   Name of memory block = variable's name
   Content of that block = value in that variable.
   Address of memory block = unique address which allow us to access that variable. */


// & --> The address of operator is used to obtain the address of a given variable
// %u --> Format specifier for printing pointers
// * --> Value at address is used to obtain the value present at a given memory address.
// eg. *(&i) = 72 , *(&j) = 87994
// Pointer can be of type int,char,array,function,or any other pointer.

int main(){
    int i = 34;
    int *j = i; // j will now store the address of i
    j = &i;
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The address of i is %u\n",j);
    printf("The address of i is %u\n",&i);
    printf("The address of j is %u\n",&j);
    printf("The value of j is %d\n",j);
    printf("The value of j is %d\n",*(&j));

    
    return 0;
}

// & -> Unary operator,also k/n as "Referencing Operator"
// * -> Dereferencing operator
        