#include<stdio.h>
int main(){

int i=1,sum=1;
int n;
printf("enter a positive integer:");
scanf("%d",&n);
while(i<=n){
    sum*=i;
    i+=2;
}
printf("%d",sum);

}
