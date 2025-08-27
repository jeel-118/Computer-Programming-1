#include <stdio.h>
int main(){
int total;
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
printf("\n");
total=maths+physics+chemistry;
printf("%d",total);
if(average>=70){
        printf("distinction");
}
else if(average>=60){
    printf("First");
}
else if(average>=50){
    printf("Second");
}
else if(average>=35){
    printf("third class");
}
else{
    printf("Fail");
}
return 0;

}
