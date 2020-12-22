
#include<stdio.h>
int findmid(int a[],int n);
int main(){

int a[]={10,12,43,55,67};
int n=sizeof(a)/sizeof(a[0]);
int *mid=findmid(a,n);
printf("mid=%d",*mid);

}
int findmid(int a[],int n){

return &a[n/2];

}
