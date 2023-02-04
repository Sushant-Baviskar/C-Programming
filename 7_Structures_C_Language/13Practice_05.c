#include<stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;

}date;

void display(date d)
{
    printf("The date is : %d/%d/%d",d.day,d.month,d.year);
}

int main(){
    date d1 = {2,11,21};
    date d2 = {2,4,22};
    display(d1);
    display(d2);
    
    return 0;
}