#include<stdio.h>
int main(){
int n;
int rem;
int seen[10]={0};
printf("enter a number:");
scanf("%d",&n);
while(n>0){
    rem=n%10;
    if(seen[rem]==1) break;
    seen[rem]=1;
    n=n/10;

}
if(n>0) printf("yes");
else printf("no");


}

