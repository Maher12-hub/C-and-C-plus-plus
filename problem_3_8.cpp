#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two positive integer:"<<endl;
    cin>>a>>b;
    int result;
   
    char signature;
    cout<<"enter the sign:"<<endl;
    cin>>signature;
    switch (signature){
    case '+' : 
        result=a+b;
        cout<<result<<endl;
        break;
    case '-' :
       result=a-b;
       cout<<result<<endl;
       break;
    case '*':
       cout<<a*b<<endl;
       break;
    case '/':
       cout<<a/b<<endl;
       break;
    case '%':
       cout<<a%b<<endl;
       break;
    default:
        cout<<"got nothing"<<endl;
        break;
    }
}