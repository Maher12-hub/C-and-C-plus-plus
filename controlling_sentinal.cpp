#include<iostream>
using namespace std;
int main(){
int n,count=0;
cout<<"enter positive integer or(0 to quit)"<<endl;
long sum=0;
for(;;){
    cout<<"\t"<<count+1<<":";
    cin>>n;
    if(n<=0) break;
    count++;

    sum+=n;
}
cout<<"the average is "<<float(sum)/count<<endl;


}
