#include<stdio.h>
int main(){

int n,sum=0;
printf("enter a positive integer:");
scanf("%d",&n);
for(int i=0;i<=n;i++){
    sum+=i;
}
printf("%d",sum);
}