#include<stdio.h>
int main(){
int i;
int sum=0;
for(i=1;i<=100;i++){
        if(i%13==0){
        sum=sum+i;
        }


}
printf("The sum of numbers divisibility of 13 in btw 1 to 100 is equal to%d\n",sum);
return 0;
}
