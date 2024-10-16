#include<stdio.h>

int main(){
    int arr[10];
    for (int i = 0; i < 5; i++){
        printf("Enter the %dth element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<5; i++){
        printf("The %dth element is %d\n",i+1,arr[i]);
    }
}