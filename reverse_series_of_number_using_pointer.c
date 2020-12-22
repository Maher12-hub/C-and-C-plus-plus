#include<stdio.h>
int main(){
int n;
printf("enter the length of the array:");
scanf("%d",&n);
int a[n];
int *p;
for(p=a;p<=a+n-1;p++){
    printf("enter the elements of the array:");
    scanf("%d",p);
}
printf("reverse element of the array is:");
for(p=a+n-1;p>=a;p--){

    printf("%d ",*p);
}


}
