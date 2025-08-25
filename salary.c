#include<stdio.h>
int main(){
int salary;
int grosssalary;
printf("Enter gross salary:");
scanf("%d",&grosssalary);
int allowances;
printf("Enter allowances:");
scanf("%d",&allowances);
allowances=grosssalary*0.1;
int deduction;
printf("Enter deduction:");
scanf("%d",&deduction);
deduction=grosssalary*0.03;
salary=grosssalary+allowances-deduction;
printf("%d",salary);
return 0;

}
