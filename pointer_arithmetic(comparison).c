#include<stdio.h>
int main(){

int arr[]={10,12,43,55,23,43,87};
int *p=&arr[3];
int *q=&arr[6];
printf("%d\n",p<q);
printf("%d\n",p>q);
q=&arr[4];
printf("%d",p==q);

}
