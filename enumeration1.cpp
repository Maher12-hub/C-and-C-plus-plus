#include<iostream>
using namespace std;
int main()
{
    enum semester{Fall,Spring,Summer};
    semester s1,s2;
    s1=Fall;
    s2=Spring;
    if (s1==s2) cout<<"same semester"<<endl;
    else
    {
      cout<<"different semester"<<endl;
    }
    



}