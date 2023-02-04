#include<stdio.h>
int factorial(int x);

// A function defined in c can call itself.This is called as recursion.
// A function calling itself is also called as recursive function.

/* Recursion is a process when a function calls a copy of itself to work on
   smaller problem.

   This makes the life of programmer easy by dividing a given problem into easier
   problems.

   A termination condition is imposed on such functions to stop them eecuting copies
   themselves forever.

   Any problem that can be solved recursively can be solved iteratively.

   However,some problems are best suited to be solved using recursion.
   for ex. Tower of Hanoi,Fibonacci series,Factorial finding */





   

   


int main(){

    int a = 3;
    printf("The value of factorial %d is %d",a,factorial(a));

    
    return 0;
}

int factorial(int x)
{
    if(x==1 || x==0)    // Base Condition->case at which function doesn't recur.
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }
}


