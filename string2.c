#include<stdio.h>

int main(){
    char input[100];
    scanf("%s",input);
    int vowel = 0;
    int consonant = 0;
    int i = 0;
    while(input[i] != '\0'){
        if (input[i]=='a' || input[i] == 'A' || input[i]=='e' || input[i]=='E' || input[i]=='i' || input[i]=='I' || input[i]=='o' || input[i]=='O' || input[i]=='u' || input[i]=='U'){
            vowel++;
        }
        else{
            consonant++;
        }
        i++;
    }
    printf("%d%d",vowel,consonant);
}