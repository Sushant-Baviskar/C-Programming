#include<stdio.h>

int main(){
    char ch1[45];
    printf("Enter your name and see the magic\n");
    scanf("%s",ch1);
    printf("Your name is %s",ch1);

    // scanf can't be used to input multi-word strings with spaces.
    
    return 0;
}