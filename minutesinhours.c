#include <stdio.h>
int main(){
double hours;
int minutes;
printf("enter minutes:");
scanf("%d",&minutes);
hours =(double)minutes*0.0167;
printf("%.2f hours",hours);
return 0;
}
