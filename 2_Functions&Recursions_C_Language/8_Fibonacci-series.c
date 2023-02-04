#include<stdio.h>
int fib_recursive(int n)
{
   if(n==1 || n==2)
   {
       return n-1;
   }
   else{
       return fib_recursive(n-1) + fib_recursive(n-2);
   }
}

int fib_iterative(int n)
{
   int a=0,b=1;
   for(int i=0;i<n-1;i++)
   {
       b=a+b;
       a=b-a;
       
   }
   return a ;
}

int main(){
    int number;
    printf("Enter the index to get fibonacci series");
    scanf("%d",&number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n",number,fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n",number,fib_recursive(number));


   
    
    
    return 0;
}

/* WHY IS RECURSION NOT ALWAYS GOOD?

* Recursive approach was slow which increases time complexity.
* In case of factorial calculation,recursion saved a lot of line of codes.
* However in case of fibonacci series,recursion resulted in some extra unnecessary 
  function calls which was an extra overhead!
* Running time for fibonacci series grows exponentially with input in case of
  recursive approach. */
