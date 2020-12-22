#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter two positive integers"<<endl;
    cin>>m>>n;
    //if(m<n) cout<<"the minimum is "<<m<<endl;
    //else cout<<"the minimum is "<<n<<endl;
    cout<<(m<n?m:n)<<" is the minimum"<<endl;
}