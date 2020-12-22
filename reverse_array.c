#include<stdio.h>
int main(){
int n;
printf("enter the length of the array:");
scanf("%d",&n);
int arr[n];
printf("enter the elements of the array:");
for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
}
for(int i=n-1;i>=0;i--){
    printf("%d",arr[i]);
    printf(" ");
}

}
