#include<stdio.h>

int main(){
    int arr[6][6];
    for(int i=0; i<6; i++){
        for (int j=0; j<6; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max = -100000;
    int tSum = 0;
    for(int i=0; i<4; i++){
        tSum = 0;
        for (int j=0; j<4; j++){
            tSum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j+1];
            if (tSum > max) max = tSum;
        }
    }
    printf("%d\n",tSum);
}