#include<stdio.h>
int main(){

char str1[10]="maher";
char str2[3];
strncpy(str2,str1,sizeof(str1));
printf("%s",str2);

}
