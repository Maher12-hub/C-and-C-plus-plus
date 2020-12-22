#include<stdio.h>
#include<string.h>
int main(){
char str1[8]="maher ";
char str2[10]="rahman";
strncat(str1,str2,sizeof(str1)-strlen(str1));
printf("%s",str1);

}
