#include<stdio.h>

long long fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return fib(n-1)+fib(n-2);
}
int main(){
    long long n;
    for (int i=0; i<1000; i++) arr[i] = -1;
    printf("Please enter a number: ");
    scanf("%lld",&n);
    printf("The %lldth fibonacci number is: %lld\n",n,fib(n));
}