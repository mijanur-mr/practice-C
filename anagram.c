
#include<stdio.h>

int main(){
    char first[100], second[100];
    int flag=0;
    scanf("%s%s",first,second);
    for (int i=0; first[i] != '\0'; i++){
        for(int j=0; second[j] != '\0'; j++){
            if (first[i] == second[j]){
                 flag=1;
                continue;
            }
        }
    }
    if(flag==1){
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
}