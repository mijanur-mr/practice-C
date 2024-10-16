#include<stdio.h>

int main(){
    int a;//4 Bytes
    char b;//1 Bytes
    float c;//4 Bytes
    long d;//4 bytes
    long long e;//8 bytes
    double f;//8 bytes
    size_t g;//4 bytes

    printf("The size of int is: %zu bytes\n", sizeof(a));
    printf("The size of char is: %zu bytes\n", sizeof(b));
    printf("The size of float is: %zu bytes\n", sizeof(c));
    printf("The size of long is: %zu bytes\n", sizeof(d));
    printf("The size of long long is: %zu bytes\n", sizeof(e));
    printf("The size of double is: %zu bytes\n", sizeof(f));
    printf("The size of size_t is: %zu bytes\n", sizeof(g));
}