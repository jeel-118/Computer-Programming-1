#include <stdio.h>
int main(){
int gigabyte;
int bytes;
printf("Enter bytes:");
scanf("%d",&bytes);
gigabyte=bytes*0.000000001;
printf("%d",gigabyte);
return 0;
}

