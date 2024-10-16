#include<stdio.h>
void bubble_sort(int arr[], int size){
    for (int i = size-1; i>=0; i--){
        for (int j = size-1; j>=1; j--){
            if (arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr[5] = {66,20,13,41,55};
    bubble_sort(arr,5);
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}