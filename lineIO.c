#include<stdio.h>

int main(){
    char line[1000];
    printf("Please enter a line: ");
    //gets(line);
    //get doesn't print any extra new line
    fgets(line,sizeof(line),stdin);
    //fgets print an extra new line
    //printf("Your line is: %s\n",line);
    puts(line);
    //puts doesn't need any format specifier 
}