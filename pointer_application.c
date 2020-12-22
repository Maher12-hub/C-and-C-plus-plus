#include<stdio.h>
int main(){

int n;
int a[n];
printf("enter the length of the array:");
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);

}
//int min=a[0];
int max=a[0];
for(int j=1;j<n;j++){
    //if(a[j]<min) min=a[j];
    if(a[j]>max) max=a[j];
}
//printf("the minimum number is=%d",min);
printf("the maximum number is=%d",max);

}
