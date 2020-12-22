#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
    switch (age)
    {
    case 16:
        cout<<"you cant enter into the site"<<endl;
        break;
    case 18:
        cout<<"you can enter into the site:"<<endl;
        break;
    
    default:
        cout<<"got nothing"<<endl;
        break;
    }
}