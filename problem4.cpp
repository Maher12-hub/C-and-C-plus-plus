///Write a single C++ statement that subtracts the sum of x and y from z and then
///increments y.
#include<iostream>
using namespace std;
int main()
{

  int z,x,y;
  cin>>z>>x>>y;
  z-=(x+y++);
  cout<<"z="<<z<<endl;
  cout<<"y="<<y;
}