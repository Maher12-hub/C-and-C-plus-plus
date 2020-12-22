#include<stdio.h>
void  addition(int a,int b);
void subtract(int a,int b);
void multipli(int a,int b);
void division(int a,int b);
int main(){


addition(10,15);
subtract(20,15);
multipli(3,2);
division(8,2);



}

void addition(int a,int b){

printf(" add result=%d\n",a+b);
}

void subtract(int a,int b){

int result=a-b;
printf("sub result=%d\n",result);
}
void multipli(int a,int b){
int result=a*b;
printf("mul result=%d\n",result);


}
void division(int a,int b){
int result=a/b;
printf("div result=%d\n",result);

}
