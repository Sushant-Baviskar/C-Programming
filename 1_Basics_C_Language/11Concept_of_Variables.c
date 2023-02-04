/* Scope is a region of the program where a defined variable can exist and
   beyond which it cannot be accessed.

*  Variables which are accessed inside a function or a block are called 'local
   variables'

   They can be accessed by the function they are declared in!

   They are inaccessible to the functions outside the functions they are declared
   in!
*/

// Global Variables:
/* These are variables defined outside main method.

   Global variables are accessible throughout the entire program from any function.

   If local and global variable has the same name,the local variable will take
   preference.
*/

// Formal Arguments:
// Treated as local variables within a function.

// Static Variables:

/* Static variables are variables which have a property of preserving their values
   even when they go out of scope.

   They preserve their value from the previous scope and are not initialized again

   Static variables remain in memory throughout the spn of the program.

   Static variables are initialized to 0 if not initialized explicitly.

   In C,static variables can only be initialzed using constant literals.
*/

#include <stdio.h>
int b=34;  // global variable


int func1(int b1)  // If I changed b1 to b in formal argument then it will take b=344 since value of local variable
                   // gets copied to formal arguments,otherwise if b1 then it will take value of global variable
{
   
   printf("The value of b inside func1 is %d\n",b);
   //printf("The address of b inside func1 is %d\n",&b);
   return b*10;
}

int main()
{
   int b=344;  // local variable
  // printf("The address of b inside main is %d\n",&b);
   int val= func1(b);
   int *ptr= &val;
   printf("The value of func1 is %d\n",val);


   return 0;
}
