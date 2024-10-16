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
    int found[n+1];
    for(int i=0; i<=n; i++){
        found[i]=0;
    }

    int has_duplicate = 0;

    for (int i=0; i<9; i++){
        has_duplicate = 0;
        if(found[i]) continue;
        for (int j=i+1; j<9; j++){
            if(arr[i] == arr[j]){
                found[j] = 1;
                has_duplicate = 1;
            }
        }
        if (has_duplicate==0) printf("%d \n",arr[i]);
    }
}