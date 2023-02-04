/*  Function Code examples:
1.Without arguments and without return value
2.Without arguments and with return value
3.With arguments and without return value
4.With arguments and with return value */

#include<stdio.h>
int sum(int a,int b)  // type 4.With arguments and with return value
{
    return a+b;
}

void printstar(int n)  // type 3.With arguments and without return value
{
    for(int i=0;i<n;i++)
    {
        printf("%c",'*');
    }
  
}

int takenumber()     // type 2.Without arguments and with return value
{
  int i;
  printf("Enter a number");
  scanf("%d",&i);
  return i;
}

void Star_pattern()  // type 1.Without arguments and without return value
{
    int a;
    printf("Enter how many stars you want\n");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        printf("*");
    }
}
    




int main(){
    int a,b,c;
    a=9;
    b=87;
   // c=sum(a,b);
   // printf("The sum is %d",c);
   //printstar(7);
   //c=takenumber();
   Star_pattern();
   printf("The no. entered is %d",c);
    
    return 0;
}
