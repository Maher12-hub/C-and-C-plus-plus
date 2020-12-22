#include<stdio.h>
#include<stdlib.h>
int main(){
char str[100];
gets(str);
char str1[100];
int i=0;
int str_len=strlen(str);
while(i<str_len){
        str1[i]=str[i];
        i++;

}
printf("%d %s",i,str1);
}
