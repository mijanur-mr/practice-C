#include<stdio.h>
#include<string.h>

int main(){
    char str[100] = "Hello";
    char len = strlen(str);
    printf("The length of your string is: %d\n",len);
    strcpy(str_new,str);
    printf("The new string after copy is: %s\n",str_new);
    char str2[100] ="world";
    strcat(str,str2);
    printf("The str after cat is: %s\n",str);
        
}