#include <stdio.h>
int main(){
double average;
int maths;
printf("Enter maths marks:");
scanf("%d",&maths);
int physics;
printf("Enter physics marks:");
scanf("%d",&physics);
int chemistry;
printf("Enter chemistry marks:");
scanf("%d",&chemistry);
average=(maths+physics+chemistry)/3;
printf("%f",average);
return 0;

}
