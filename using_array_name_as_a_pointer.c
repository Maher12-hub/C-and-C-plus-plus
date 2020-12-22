
#include<stdio.h>
int main(){
int a[4];
*a=10;
*(a+1)=20;
*(a+2)=30;
printf("%d",a[2]);

}
