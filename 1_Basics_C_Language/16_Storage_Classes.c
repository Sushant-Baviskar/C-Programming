#include<stdio.h>
int sum;
int myfunc(int a,int b)
{
  auto int sum;
  sum=a+b;
  return sum;
  
}

int main(){

  // Declaration - Telling the compiler about the variable (No space reserved)
  // Definition  - Declaration + Space reservation

  //int sum=myfunc(3,5);
  printf("The sum is %d\n",sum);
    
    return 0;
}