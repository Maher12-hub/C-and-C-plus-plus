#include<stdio.h>
int main(){

int i=0,n;
printf("enter a positive integer:");
scanf("%d",&n);
for(i=0;i<=n;i++){
    printf("%d\n",i);
    if(i>6) break;
}
}
