#include<stdio.h>
#include<math.h>
int main(){
int i,j;
int isprime;
for(i=2;i<=100;i++){
    isprime=1;
    for(j=2;j<=sqrt(i);j++){
        if(i%j==0){
            isprime=0;
            break;
        }
        if(isprime==1){
            printf("%d",i);
        }
    }

}
printf("\n");
return 0;

}
