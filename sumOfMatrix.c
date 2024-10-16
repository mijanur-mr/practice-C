#include<stdio.h>

int colSize = 3;
int rowSize = 3;
void sumOfMatrix(int mat1[][colSize], int mat2[][colSize], int result[][colSize]){
    for ( int row = 0; row < rowSize; row++){
        for ( int col = 0; col < colSize; col++){
            result[row][col] = mat1[row][col] + mat2[row][col];
        }
    }
}
int main(){
    int mat1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int mat2[3][3] = {{-1,-2,-3},{-4,-5,-6},{-7,-8,-9}};
    int result[3][3];
    sumOfMatrix(mat1,mat2,result);
    for (int row = 0; row < rowSize; row++){
        for ( int col = 0; col < colSize; col++){
            printf("%d ", result[row][col]);
        }
        printf("\n");
    }
}