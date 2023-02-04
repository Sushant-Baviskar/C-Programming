/* There are two kinds of loops:
1. Entry Controlled loops:The test condition is evaluated before entering the loop body.
                          eg.for loop and while loop
2. Exit Controlled loops:The test condition is tested at the end of the loop.The loop body
                         body will execute atleast once , whether the test condition is 
                         true or false.
                         eg.do-while loop */
  
#include<stdio.h>

int main(){
    int num,i=0;
    printf("Enter a number\n");
    scanf("%d",&num);

    do
    {
        printf("%d\n",i);
        i++;
    } while (i<num);
    
    return 0;
}

                        