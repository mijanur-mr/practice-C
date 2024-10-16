#include<stdio.h>
int my_str_cmp(const char str1[],const char str2[]){
for (int i=0;str1[i]!='\0' && str2[i]!='\0';i++){
if(str1[i]>str2[i]) return 1;
if (str1[i]<str2[i] )return -1;
}
printf("1st loop failed to decide now choice goes to length\n");
int str1_length,str2_length;
int i=0;
for (str1_length=0;str1[str1_length]!='\0';str1_length++);
for (str2_length=0;str2[str2_length]!='\0';str2_length++);
if (str1_length==str2_length) return 0;
if(str1[i]>str2[i]) return 1;
if (str1[i]<str2[i] )return -1;

}

int main(){

char str1[100]="account";
char str2[100]="accountant";
int result=my_str_cmp(str1,str2);

if (result==0){printf("the strings are same\n");}
else if (result==1){printf("1st string is lexicographically larger.\n");

}
else {
printf("2nd string is lexicographically larger.\n");}
}