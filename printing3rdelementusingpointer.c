#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    int *ptr=&arr[2];
    printf("3rd element of array is %d \n",*ptr);


    return 0;
}
