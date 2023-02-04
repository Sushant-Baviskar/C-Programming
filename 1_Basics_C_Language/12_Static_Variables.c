#include<stdio.h>
int b=34;

int func1(int b1)
{
    static int myvar=100;
    printf("The value of myvar is %d\n",myvar);
    myvar++;
    
}

int main(){
    int val = func1(b);
    val=func1(b);
    val=func1(b);
    val=func1(b);
    val=func1(b);
    val=func1(b);

    
    return 0;
}