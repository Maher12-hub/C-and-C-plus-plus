///Write a single C++ statement that decrements the variable n and then adds it to total.
#include<iostream>
using namespace std;
int main()
{

    int total=100;
    int n=5;
    total+=--n;
    cout<<"total="<<total<<endl;
    cout<<"n="<<n<<endl;
}