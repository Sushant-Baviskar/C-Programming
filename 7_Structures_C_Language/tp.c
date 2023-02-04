#include<stdio.h>

struct rectangle
{
    int l,b;
};

int area(struct rectangle r1)
{
    r1.l++;
    printf("%d\n",r1.l);
   
}

int main(){
    struct rectangle r = {10,5};
    area(r);
    printf("%d\n",r.l);  
    
    return 0;
}