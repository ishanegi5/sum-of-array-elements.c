#include<stdio.h>
void main()
{ int sum=0,arr[5];
printf("Enter 5 numbers: ");
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
printf("sum of 5 numbers in array are: ");
for(int j=0;j<5;j++){
   sum+=arr[j];
    
}
printf("%d ",sum);
}
