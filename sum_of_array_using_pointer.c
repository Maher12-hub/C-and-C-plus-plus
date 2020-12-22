#include<stdio.h>
int main(){
int arr[]={10,12,3,4,5};
int sum=0,*p;
for(p=&arr[0];p<=&arr[4];p++){
    sum+=*p;
}
printf("sum=%d",sum);

}
