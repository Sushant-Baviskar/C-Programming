#include<stdio.h>

void printArray(int *ptr, int n)
{
    for (int i=0;i<n;i++)
    {
        printf("The value of element %d is %d\n",i+1,*ptr);
        ptr++;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    printArray(&arr[0], 7);   // &arr[0] == arr  !!!   IMP  
                              // By passing array's base address to the function!!
    

    
    return 0;

    /* We can pass arrays to function when we need to pass a list of values to given 
   function.

We can pass arrays to a function:
1.By declaring array as a parameter in the function.
2.By declaring a pointer in the function to hold the base address of the array.*/


}