#include<stdio.h>
int main(){
int netsales;
int grosssales;
printf("Enter grosssales:");
scanf("%d",&grosssales);
int discount;
printf("Enter discount:");
scanf("%d",&discount);
netsales=grosssales-(0.1*discount);
printf("%d",netsales);
return 0;



}
