#include<stdio.h>

void my_str_copy(char dest[],const char src[]){
    int i = 0;
    while (src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'
    //If we don't assign null character, only the number of src
    //alphabets will be replaced
}
int main(){
    char word[100] = "Hello_World";
    printf("Your word is: %s\n",word);
    my_str_copy(word,"Mijan");
    printf("Your word after copy is: %s\n",word);
    return 0;
}