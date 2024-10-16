#include<stdio.h>
#include<math.h>

int isPrime[120];
void sieveOfEratosthenes(int range){
    for(int i=0; i <= range; i++) isPrime[i] = 1;
    isPrime[0] = 0;
    isPrime[1] = 0;
    for(int i = 2; i <= sqrt(range); i++){
        if(isPrime){
            for(int j=i*i; j<=range; j=j+i){
                isPrime[j] = 0;
            }
        }
    }
}
int main(){
    sieveOfEratosthenes(1000);
    for (int i=0; i<=1000; i++){
        if(isPrime[i]) printf("%d ",i);
    }
    printf("\n");
}