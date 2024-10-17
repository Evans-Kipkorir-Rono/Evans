#include<stdio.h>
#include <string.h>
#include<math.h>

 float ElectricBill( units)
{
float rate;
float bill;
if (units<=199){
rate=1.20;}
else if (units<=200 &&units<400){
rate=1.50;}
else if(units<=400 &&units<600){
rate=1.80;}
else {
rate=2.00;}

bill=units*rate;

if (bill>400){
bill+=bill*0.15;
}
if (bill<100){
bill=100;
}
return bill;
}

int main(){
int CustomerID;
int UnitsConsumed;
char CustomerName[50];
char CopiedCustomerName[50];
float bill;
float rate;

printf("enter the customer ID");
scanf("%d",&CustomerID);
printf("enter the Units Consumed");
scanf("%d",&UnitsConsumed);
printf("enter the Customer Name");
scanf("%s",&CustomerName);

strcpy(CopiedCustomerName,CustomerName);

bill=ElectricBill;
bill=ceil(bill);

printf("\n ElectricBill %f\n");
printf("CustomerID %d\n",CustomerID);
printf("CustomerName %s\n",CopiedCustomerName);
printf("UnitsConsumed %d\n",UnitsConsumed);

if (UnitsConsumed<=199){
rate=1.20;
}
else if(UnitsConsumed<=200 &&UnitsConsumed<400){
rate=1.50;
}
else if(UnitsConsumed<=400 &&UnitsConsumed<600){
rate=1.80;
}
else{
rate=2.00;
}
printf("charge per unit:%.2f\n",rate);
printf("Total amount to pay:%.2f\n",bill);


    return 0;
}