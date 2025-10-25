#include<stdio.h>
int main(){
    int value =50;
    int*ptr=&value;
    printf("Address stored in pointer is %p \n",*ptr);
    printf("Value at the address is %d ",*ptr);


    return 0;
}
