#include <stdio.h>
int main(){
    int kilogram;
    int grams;
    printf("Enter grams:");
    scanf("%d",&grams);
    kilogram=grams*0.001;
    printf("%d",kilogram);
    return 0;
}

