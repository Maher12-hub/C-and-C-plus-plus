#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age:"<<endl;
    cin>>age;
    if (age<18){
        cout<<"you are a child"<<endl;

    }
    if (age>=18 && age<=65){
        cout<<"you are an adult"<<endl;
    }
    if (age>65){
        cout<<"you are a senior citizen"<<endl;
    }
}