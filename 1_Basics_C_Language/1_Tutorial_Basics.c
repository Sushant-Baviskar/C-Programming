/* C is one of the fastest programming language as it is close to low-level languages
   such as Assembly language.

   Lot of python libraries are prepared using C.

   Linux OS is written 97% using C.
   MySQL database is written using C.
   Ruby and Pearl are mostly writen using C.

   Coding is the ability to write computer programs.
   C language was developed by Dennis Ritchie in 1972

   Basic structure of C program:
   1.Any line starting with # represents a preprocessing command.It tells our
     program that before its execution,it must include the stdio.h named file in it
     because we are using some of the commands or codes from this file.
   2.Tokens in C : Keywords = reserved keywords that can not be used elsewhere in
                              the program for naming a variable or fuction,instead
                              they have a specific function or tasks and they are 
                              solely used for that. 
                   Identifiers  
                   Constants
                   String Literal
                   Symbols

** Rules for naming variables:
   1.A variable name can contain alphabets,digits, and underscore(_) only.
   2.The starting letter can't be a digit.
   3.White spaces can't be used.
   4.The name shouldn't be reserved keyword or special character.*/

/* Operators in C:

1. Arithmetic Operators -> +,-,/,*,%
2. Relational Operators
3. Logical Operators -> &&,||,!
4. Bitwise Operators -> &,|,^,>>,<<  Bitwise operators works on binary nos.!!!
5. Assignment Operators */

/* Bitwise AND &
   Bitwise OR |
   Bitwise XOR ^  -> same operands -> 0 , diff. operands -> 1      
   Bitwise NOT ~
   Right Shift >> append 0 on left and remove bits on right side
   Left Shift  << append 0 on right and remove bits on left side */

   #include<stdio.h>
   
   int main(){
     int x;
     x=5>4?1,2,3:4,5,6;
     printf("%d",x);
     
     getch();
   }













