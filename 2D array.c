//array in C=3D array
#include<stdio.h>
int main(){
int matrix[2][3];
int rowsum[2]={0};

for(int i=0;i<2;i++){
for (int j=0;j<3;j++){
matrix[i][j]=(i+1)*(j+2);
}
}
for (int i=0;i<2;i++){
for (int j=0;j<3;j++){
rowsum[i]+=matrix[i][j];
}
}
printf("2D array(matrix):\n");
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
printf("%d",matrix[i][j]);
}
printf("\n");
}

printf("sum of row [1]:%d",rowsum[0]);
printf("sum of row [2]:%d",rowsum[1]);

return 0;
}


