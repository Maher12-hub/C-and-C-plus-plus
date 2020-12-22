#include<iostream>
using namespace std;
int main()
{

    enum months{No=0,False=0,Yes=1,True=1,Ok=1};
    int answer;
    cout<<"enter the answer:"<<endl;
    cin>>answer;
    if (answer==Yes)
    {
        cout<<"matched"<<endl;
    }
    else
    {
        cout<<"not matched"<<endl;
    }
    
}