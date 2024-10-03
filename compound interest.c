#include <stdio.h>
#include <math.h>
//program of finding the compound interest
/*Evans Rono
Reg no'CT101/G/22634/24
*/
int main (){

float P;
printf ("enter the principal:  ");
scanf ("%f", &P);
float R;
printf ("enter rate of compound interest: ");
scanf ("%f", &R);
float n;
printf ("enter n") ;
scanf ("%f", & n);
float t;
printf ("enter time duration: ");
scanf ("%f", &t);
float ci=P*pow((1+(R/100)/n),n*t);
printf ("%f", ci);
return 0;}
    