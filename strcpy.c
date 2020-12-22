#include<stdio.h>
#include<string.h>
int main(){

char str1[10]="maher";
char str2[10];
char str3[10];
strcpy(str3,strcpy(str2,str1));
printf("%s",str3);

}
