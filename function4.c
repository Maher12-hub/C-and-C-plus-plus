#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
double addition(double,double);
int main(){
double a,b;
bool flag=true;
while(true){
    printf("enter two double numbers:\n");
    scanf("%lf%lf",&a,&b);
    if(a==0) exit(0);
    double result=addition(a,b);
    printf("add result=%lf\n",result);
}

}



double addition(double a,double b){

double result=a+b;
return result;
}
