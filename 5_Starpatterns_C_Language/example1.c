#include<stdio.h>

void starPattern(int rows)
{
  for(int i=1;i<=rows;i++)
  {
    for(int j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
  }
} 


void reverseStarPattern(int rows)
{
  for(int i=1;i<=rows;i++)
  { 
      for(int j=1;j<=rows-i+1;j++)  
      {
          printf("*");
      }
    
    printf("\n");
  }
}

int main(){
    int rows;
    printf("How many rows do you want?\n");
    scanf("%d",&rows);
    //starPattern(rows);
    reverseStarPattern(rows);

    return 0;
}