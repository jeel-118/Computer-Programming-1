#include <stdio.h>
int main(){
double interest;
int principal;
printf("Enter principal:");
scanf("%d",&principal);
int rate;
printf("Enter rate:");
scanf("%d",&rate);
int time;
printf("Enter time:");
scanf("%d",&time);
interest=principal*rate*time*0.01;
printf("%f",interest);
return 0;
}
