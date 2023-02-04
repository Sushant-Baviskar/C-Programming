/* Union is a user defined data type (very similar to structure)

* The difference between structures and unions lies in the fact that in structure,
  each member has its own storage location,whereas members of union uses a single
  shared memory location.

* The single shared memory location is equal to the size of its largest data member.

* Syntax of union is very similar to that of structure.

* Union can't handle all members at once.

*/

#include<stdio.h>

union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main(){
    union student s1;
    strcpy(s1.name,"Harry");
    s1.marks=45;
    s1.fav_char='u';
    s1.id=1;
 
 printf("The id is %d\n",s1.id);
 printf("The marks is %d\n",s1.marks);
 printf("The fav_char is %c\n",s1.fav_char);
 printf("The name is %s\n",s1.name);
   
    

    

    
    return 0;
}




