// Create a two dimensional vector using structures.

#include<stdio.h>
struct vector
{
    int x,y;
    

};

int main(){
    struct vector v1,v2;
    v1.x = 34;
    v1.y = 34;
    printf("X dim is %d ans Y dim is %d\n", v1.x, v1.y);

    v2.x = 35;
    v2.y = 35;
    printf("X dim is %d ans Y dim is %d\n", v2.x, v2.y);
    
    return 0;
}