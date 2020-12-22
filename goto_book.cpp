#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a positive integer"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        for (int k=0;k<n;k++)
             if (i+j+k>n) goto esc;
             else cout<<i+j+k<<" ";
        cout<<" * ";
    }
    esc:cout<<" . "<<endl;
}


}
