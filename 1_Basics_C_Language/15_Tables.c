#include<stdio.h>

int main(){

    int n;
    printf("Enter n");
    scanf("%d",&n);
    
    
    for(int i=1;i<=n;i++)
    {
         for(int j=1;j<=10;j++)
         {
             int k;
             k=j*i;
             printf("%d\n",k);
         }
         printf("\n");


    }


    return 0;
}