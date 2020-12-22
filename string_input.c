#include<stdio.h>
#include<string.h>
int main(){

char menu[10]="fuchka";
char order[10];
scanf("%s",order);
printf("ordered food is %s\n",order);
int d=strcmp(menu,order);
if(d==0){
    printf("the ordered food is available now");
}

}
