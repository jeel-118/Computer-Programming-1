#include<stdio.h>
int main(){
    int positive=0;
    int negative=0;
    int zero=0;
int n;
printf("Enter n:");
scanf("%d",&n);
int a;
printf("Enter a:");
scanf("%d",&a);
for(int i=a;i<=n;i++){
    if(i>0){
       positive++;
    }
    else if(i<0){
        negative++;
    }
    else{
        zero++;
    }
}
printf("positive numbers:%d\n",positive);
printf("negative numbers:%d\n",negative);
printf("zeros:%d\n",zero);
return 0;


}
