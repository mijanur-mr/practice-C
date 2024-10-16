#include<stdio.h>

void increement(int b){
    b++;
    printf("The value of b is: %d\n",b);
}
void arrayIncreement(int brr[], int size){
    for (int i=0; i<size; i++){
        brr[i]++;
    }
}
int main(){
    int i = 5;
    increement(i);
    printf("The value of i is: %d\n",i);
    //variable is assignable so it is copied in function
    int arr[5] = {1,2,3,4,5};
    printf("Elements of array: \n");
    for (int i=0; i<5; i++){
        printf("%d\n",arr[i]);
    }
    arrayIncreement(arr,5);
    printf("Elements of array after increement: \n");
    //array is not copiable so it is directly transferred to function
    for (int i=0; i<5; i++){
        printf("%d\n",arr[i]);
    }
}