#include<iostream>>
#include<cstdlib>>
#include<ctime>
using namespace std;
int main(){
unsigned seed=time(0);
cout<<"seed="<<seed<<endl;
srand(seed);
int min,max;
cout<<"enter minimum and maximum number:"<<endl;
cin>>min>>max;
long range=max-min+1;
for(int i=1;i<=10;i++){
    cout<<rand()<<endl;
}

}
