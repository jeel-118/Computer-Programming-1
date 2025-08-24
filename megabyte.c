#include <stdio.h>
int main(){
int megabyte;
int bytes;
printf("Enter bytes:");
scanf("%d",&bytes);
megabyte=bytes*0.000001;
printf("%d",megabyte);
return 0;
}
