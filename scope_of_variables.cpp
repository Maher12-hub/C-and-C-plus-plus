#include<iostream>
using namespace std;
int x=32;
int main()
{
    int x=21;
    {
        int x=11;
        cout<<"vlaues of x inside the block of main:"<<x<<endl;
    }
    cout<<"x valus in the main block:"<<x<<endl;
    cout<<"x valus outside of the main block:"<<::x<<endl;
   

}