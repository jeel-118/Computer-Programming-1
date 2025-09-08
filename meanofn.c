#include<stdio.h>
int main(){
int n;
printf("Enter n:");
scanf("%d",&n);
int a;
printf("Enter a:");
scanf("%d",&a);
int sum=0;
double mean;
for(int i=a;i<=n;i++){
    sum=sum+i;
    mean=sum/(n-a);
}
printf("%d\n",sum);
printf("%f\n",mean);
return 0;

}
