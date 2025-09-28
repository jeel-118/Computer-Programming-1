#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 values:");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("%d %d %d",arr[3],arr[6],arr[8]);


return 0;
}
