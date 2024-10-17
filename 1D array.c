//array in C=1D array
#include<stdio.h>
int main(){
int i;
int arr[10];
int sum=0;
float average;

for(i=0;i<10;i++){
arr[i]=(i+1)*5;
}
for(int i=0;i<10;i++){
sum+=arr[i];
}

average=sum/10.0;

printf("1D array elements");
for(i=0;i<10;i++){
printf("%d",arr[i]);
}
printf("\nsum:%d\n",sum);
printf("average %.2f\n",average);
return 0;
}


