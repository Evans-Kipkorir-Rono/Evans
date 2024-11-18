#include<stdio.h>
int main(){
int x;
printf("enter the number");
scanf("%d",&x);
int mod=x%2;

if(mod==0){printf("number is even");}
else{printf("number is odd");}

return 0;
}

