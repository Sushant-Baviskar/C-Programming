// Complex no. using structure

#include<stdio.h>

struct complex{
    int r;
    int c;

};

int main(){
    struct complex n1,n2;
    n1.r = 1;
    n1.c = 5;
    printf("The complex no. n1 is %d+%di\n",n1.r,n1.c);

    n2.r = 2;
    n2.c = 3;
    printf("The complex no. n2 is %d+%di\n",n2.r,n2.c);




    
    return 0;
}