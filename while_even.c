#include<stdio.h>
int main(){

int num;
int i=0;
printf("enter a number here:");
scanf("%d",&num);
while(i<=num){
    if(i%2==0) printf("%d is even\n",i);
    else printf("%d is odd\n",i);
    i++;
}
}
