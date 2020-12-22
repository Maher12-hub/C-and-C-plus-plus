#include<iostream>
using namespace std;
int main()
{
    int m=44;
    int n=++m;
    cout<<"m="<<m<<",n="<<n<<endl;
    n=m++;
    cout<<"m="<<m<<",n="<<n<<endl;

}