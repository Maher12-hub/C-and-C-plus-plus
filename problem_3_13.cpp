#include<iostream>
using namespace std;
int main()
{   int sum=0;
    int num;
    cout<<"enter a number:";
    cin>>num;
    sum=(num/100000)%10+(num/10000)%10+(num/1000)%10+(num/100)%10+(num/10)%10+(num/1)%10;
    
    cout<<"sum="<<sum<<endl;
}