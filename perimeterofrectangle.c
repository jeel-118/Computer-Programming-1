#include <stdio.h>
int main(){
int perimeter;
int length;
printf("Enter length:");
scanf("%d",&length);
int breath;
printf("Enter breath:");
scanf("%d",&breath);
perimeter=2*(length+breath);
printf("%d",perimeter);
return 0;
}
