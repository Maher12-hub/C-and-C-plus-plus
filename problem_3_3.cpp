#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int n1,n2;
    cout<<"how many number do you want to enter?"<<endl;
    cin>>n1;
    int numb[n1];
    for (int i=1;i<=n1;i++){
        cout<<"enter the values:"<<endl;
        cin>>n2;
        numb[i]={n2};
    }
    if(n1%2==0){
        int a=n1/2;
        int b=(n1/2)+1;
        double median=(numb[a]+numb[b])/2;
        cout<<"median= "<<median<<endl;
    }
    if (n1%2!=0){
        int c=round(n1/2)+1;
        int median=numb[c];
        cout<<"median="<<median<<endl;

    }
}