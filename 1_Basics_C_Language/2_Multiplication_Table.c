#include<stdio.h>

int main(){
    int n,product;
    printf("Enter the no.\n");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        product=n*i;
        printf("%d\n",product);
    }
    
    return 0;
}