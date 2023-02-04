/* used to bring the program control to the next iteration of the loop.
   
   The continue statement skips some code inside the loop and continues with 
   the next iteration.
    
   It is mainly used for a condition so that we can skip some lines of code for 
   particular condition.*/

 #include<stdio.h>
 
 int main(){
     int i,age;
    for(int i=0;i<10;i++)
    {
        printf("%d\nEnter your age\n",i);
        scanf("%d",&age);

        if(age>10)
        {
            continue;
        }
        printf("Harry is a good boy");
    }
     
     return 0;
 }




