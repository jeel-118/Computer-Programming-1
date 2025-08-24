#include <stdio.h>
int main(){
int kilobyte;
int bytes;
printf("Enter bytes:");
scanf("%d",&bytes);
kilobyte=bytes*0.001;
printf("%d",kilobyte);
return 0;
}
