#include<stdio.h>
int arr[1000];

long long fib(long long n){
    if(arr[n] != -1) return arr[n];
    else return arr[n] = fib(n-1)+fib(n-2);
}
int main(){
    long long n;
    for (int i=0; i<1000; i++) arr[i] = -1;
    arr[0] = 0;
    arr[1] = 1;
    printf("Please enter a number: ");
    scanf("%lld",&n);
    printf("The %lldth fibonacci number is: %lld\n",n,fib(n));
}