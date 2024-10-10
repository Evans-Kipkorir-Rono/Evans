//Electric Bill Calculator
/*NAME:EVANS RONO
REG NO'CT101/G/22634/24
*/
#include<stdio.h>
int main(){
int CustomerID;
printf("enter the customer ID");
scanf("%d",&CustomerID);

int UnitsConsumed;
printf("enter the units consumed");
scanf("%d",&UnitsConsumed);

char CustomerName[30];
printf("enter the customers name");
scanf("%s",&CustomerName);

float rate;
float TotalBill;
float Surcharge;

if( UnitsConsumed<=199){
rate=1.20;
}
else if (UnitsConsumed>=200 &&UnitsConsumed<400){
rate=1.50;
}
else if(UnitsConsumed>=400 &&UnitsConsumed<600){
rate=1.80;
}
else {rate=2.00;}
//ToTalBill formula
TotalBill=UnitsConsumed*rate;
//if the units are more than 400 then the surcharge of 0.15 of the TotalBill should bo added to the TotalBill
if (TotalBill>400){
Surcharge=TotalBill*0.15;
}

//other conditions
if (TotalBill<100){
TotalBill=100;
}
else{TotalBill+=Surcharge;}

printf("\nelectricity bill");
printf("\nCustomerID %d",CustomerID);
printf("\nUnitsConsumed %d",UnitsConsumed);
printf("\nCustomerName%s",CustomerName);
printf("\nrate %.2f",rate);
printf("Total Amount %.2f",TotalBill);

return 0;
}



    