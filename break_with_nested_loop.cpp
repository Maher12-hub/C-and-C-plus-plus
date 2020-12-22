#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int n;
cout<<"enter a positive integer:"<<endl;
cin>>n;
   for(int i=1;i<=n;i++ ){
    for (int j=1;j<=i;j++){
        cout<<setw(4)<<j*i;
    }
    cout<<endl;
   }


}
