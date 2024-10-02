//program to print rules govern while studying in the library
/*Author:Evans Kipkorir
Date:24/09/2024
Registration number:CT101/G/22634/24
*/
#include <stdio.h>
int main(){
/*
program to show if the person can be able to apply for loans
qualifications are:
  1Must be above 21 years
  2Must have a monthly salary of 21000 and above
  */
int age;
float salary;
printf("\nenter the age");
scanf("%d",&age);
printf("my age is%d",age);
printf("\nenter salary");
scanf("%f",&salary);
printf("my salary is%f",salary);
{
  if (age>=21, salary>=21000)
 printf("\ncongratulations you qualify for loan");
 else
 printf("unfortunately,we are unable to offer you a loan at this time");
 }    
return 0;
}