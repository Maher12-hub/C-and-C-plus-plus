#include<stdio.h>
int main(){

int x=10;
int *ptr=&x;
printf("%d\n",*ptr);
*ptr=20;
printf("%d",*ptr);
}
