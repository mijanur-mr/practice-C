#include<stdio.h>

int main(){
    int n;
    printf("Enter array size: \n");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    int arr[n+1];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(int i=1; i<=(n+1); i++){
        for(int j=0; j<n; j++){
            if(i == arr[j]){

                flag=1;
            }
            
        }
        if(flag == 0){
            printf("The missing number is: %d\n",i);
        }
    }
}