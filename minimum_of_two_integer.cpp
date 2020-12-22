#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter two positive integers:\n";
    cin>>n>>m;
    if (n<m)
    {
        cout<<n<<" "<<"is smaller than"<<" "<<m<<endl;
    }
    else
    {
       cout<<m<<" "<<"is smaller than"<<" "<<n<<endl;
    }
    
}