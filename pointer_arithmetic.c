#include<stdio.h>
int main(){
int a[]={10,20,30,45};
int *b=&a[1+2];
int *p=&a[0];
//*p=*p+2;
p=p+2;
printf("%d\n",*b);
printf("%d",*p);

}
