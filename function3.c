#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

float addition(float,float);
float main(){
 float a,b;
 bool flag=true;
 while(flag){

    printf("enter two positive integer or(0 to quit):\n");

    scanf("%f%f",&a,&b);
    if (a==0) break;
    float result=addition(a,b);
    printf("add result=%f\n",result);
 }


}


float addition(float a,float b){
 float sum=a+b;
 return sum;

}
