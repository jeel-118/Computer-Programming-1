#include <stdio.h>
int main(){
int z;
int num1;
printf("Enter num1:");
scanf("%d",&num1);
int num2;
printf("Enter num2:");
scanf("%d",&num2);
printf("%d",num1);
printf("%d",num2);
z=num1;
num1=num2;
num2=z;
printf("%d",num1);
printf("%d",num2);
return 0;
}
