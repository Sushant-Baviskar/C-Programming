/* A pointer that is not assigned any value but NULL is called as NULL pointer.

   We can use it to initialize a pointer variable when that pointer variable isn't
   assigned any valid memory address yet.*/

 #include<stdio.h>
 
 int main(){
     int a=5;
     int *p = NULL;

     //printf("%d\n",p);
     printf("%u\n",*p);
     
     return 0;
 }

   