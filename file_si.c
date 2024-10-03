//program to print rules govern while studying in the library
/*Author:Evans Kipkorir
Date:24/09/2024
Registration number:CT101/G/22634/24
*/
#include <stdio.h>
int main(){
float principal;
printf("enter the principal");
scanf("%f",&principal);
float rate;
printf("enter the rate");
scanf("%f",&rate);
float time;
printf("enter the duration");
scanf("%f",&time);
int si=(principal*rate*time)/100;
printf("\nprincipal is%f",principal);
printf("\nrate is%f",rate);
printf("\ntime is%f",time);
printf("\nsi is%f",(principal*rate*time)/100);
return 0;
}