#include<stdio.h>

void minmax(int arr[],int len,int *min,int *max){

    *min=arr[0];
    *max=arr[0];
    for(int i=1;i<len;i++){
        if(arr[i]>*max) *max=arr[i];
        if(arr[i]<*min) *min=arr[i];
    }


}

int main(){
int a[]={100,21,32,40,400};
int min,max;
int len=sizeof(a)/sizeof(a[0]);
minmax(a,len,&min,&max);
printf("the minimum number is=%d\n the maximum number is =%d ",min,max);


}
