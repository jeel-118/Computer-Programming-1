#include<stdio.h>
int main(){
int i;
int f=1;
int n;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++){
   f=f*i;
}
   printf("factorial is equalto %d\n",f);
   return 0;

}
