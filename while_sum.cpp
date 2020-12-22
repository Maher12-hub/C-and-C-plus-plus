#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"enter a positive integer="<<endl;
    cin>>n;
    int sum=0;
    while(i<=n){
        sum+=i;
        i++;


    }
 cout<<"the sum of the first "<<n<<" integer is "<<sum<<endl;
}
