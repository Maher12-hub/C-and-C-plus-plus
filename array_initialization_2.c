#include<stdio.h>
int main(){
int n;
printf("enter the length of the array:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);

}
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}

}
