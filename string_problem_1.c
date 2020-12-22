#include<stdio.h>
#include<string.h>
int main(){
char p[20];
int a=4;
char str1[20]="maher";
int length=strlen(str1);

for(int i=0;i<length;i++){

    p[i]=str1[length-1-i];

}
printf("%s",p);

}

