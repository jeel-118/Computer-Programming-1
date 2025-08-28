#include<stdio.h>
int main(){
    int a,r=0,temp;
    printf("Enter a number:\n");
    scanf("%d",&a);
    temp=a;
    while(temp!=0)
    {
        r=r*10;
        r=r+temp%10;
        temp=temp/10;
    }
    if(a==r)
    printf("%d is a palindromenumber\n",a);
    else{
        printf("%d is not a palindromenumber\n",a);

    }
    return 0;
}
