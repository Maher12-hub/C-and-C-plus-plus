///Write and run a program that demonstrates round-off error by executing the following steps:
//(1) initialize a variable a of type float with the value 666666; (2) initialize a variable b of
//type float with the value 1-1/a; (3) initialize a variable c of type float with the value
//1/b - 1; (4) initialize a variable d of type float with the value 1/c + 1; (5) print all four
//variables. Show algebraically that d = a even though the computed value of d ≠ a. This is
//caused by round-off error.


#include<iostream>
using namespace std;
int main()
{
    float a=666666;
    float b=1-1/a;
    float c=1/b-1;
    float d=1/c+1;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;



}