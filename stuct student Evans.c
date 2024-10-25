#include <stdio.h>
#include<string.h>

struct student{
char name[40];
char email[40];
char reg_no[40];
int phone_no;
int ID_No;
int marks;
float height;
};

int main(){
struct student student1;
strcpy(student1.name,"Evans");
strcpy(student1.email,"ronoevans57@gmail.com");
strcpy(student1.reg_no,"CT101/G/22634/24");
student1.phone_no=718937208;
student1.ID_No=534015;
student1.marks=87;
student1.height=16.7;

printf("\n name %s\n",student1.name);
printf("email %s\n",student1.email);
printf("reg_no %s\n",student1.reg_no);
printf("phone_no %d\n",student1.phone_no);
printf("ID_No %d\n",student1.ID_No);
printf("marks %d\n",student1.marks);
printf("height %f\n",student1.height);

return 0;
}
