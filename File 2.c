//program to print rules govern while studying in the library
/*Author:Evans Kipkorir
Date:24/09/2024
Registration number:CT101/G/22634/24
*/
#include <stdio.h>
int main(){
int bookid;
int duedate;
int returndate;
printf("enter the bookid");
scanf("%d",&bookid);
printf("the book id is%d",bookid);
printf("\nenter the duedate");
scanf("%d",&duedate);
printf("the due date is%d",duedate);
printf("\nenter the returndate");
scanf("%d",&returndate); 
printf("the return date is%d",returndate);
int overdue=returndate-duedate;
printf("overdue %d",returndate-duedate);
int finerate;
int fineamount;
if
(overdue<=7);{
finerate=20;
fineamount=overdue*finerate;}
if
(overdue>=8 && overdue<=14);{
finerate=50;
fineamount=overdue*finerate;}
if
(overdue>=15);{
finerate=100;
fineamount=overdue*finerate;}
printf("\nfinerate is%d",finerate);
printf("\nfineamount %d",finerate*overdue);
return 0;
}