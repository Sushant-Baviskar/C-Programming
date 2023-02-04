// A pointer can be increamented to point to the next memory location of that type.
#include<stdio.h>

int main(){
    int i = 34;
    int *ptr = i;
    ptr = &i;
    printf("The value of ptr is %u\n",ptr);
    ptr++;
    printf("The value of ptr is %u\n",ptr);
    ptr--;
    printf("The value of ptr is %u\n",ptr);

    // If char pointer is taken,increament and decreament will be of 1 byte.
    // Here in case of int,it is of 4 bytes.
    

    
    return 0;
}