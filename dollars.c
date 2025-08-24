#include<stdio.h>
int main(){
    int ruppes;
    double dollars;
     printf("enter ruppes:\n");
    scanf("%d",&ruppes);
     dollars=(double)ruppes/48;
    printf("%.2f",dollars);
    return 0;
}
