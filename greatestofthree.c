#include <stdio.h>
int main(){
int a;
printf("Enter a:");
scanf("%d",&a);
int b;
printf("Enter b:");
scanf("%d",&b);
int c;
printf("Enter c:");
scanf("%d",&c);
if(a>b&&a>c){
    printf("a will be greatest");
}
else if(b>c&&b>a){
    printf("b will be greatest");
}
else{
    printf("c will be greatest");
}
return 0;
}
