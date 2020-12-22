///Write a block of C++ code that has the same effect as the statement
///n = 100 + ++m;
///without using the pre-increment operator.

#include<iostream>
using namespace std;
int main()
{

   int m=12;
   m++;
   int n=100+m;
   cout<<"n="<<n;

}