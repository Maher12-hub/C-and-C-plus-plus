#include<stdio.h>
int main(){
int i=10,j=15;
int *p,*q;
p=&i,q=&j;
*p=*q;
printf("%d %d",*p,*q);

}
