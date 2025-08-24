#include <stdio.h>
int main(){
double celcius;
int fahrenheit;
printf("Enter fahrenheit:");
scanf("%d",&fahrenheit);
celcius=0.55*(fahrenheit-32);
printf("%f",celcius);
return 0;
}
