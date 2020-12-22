#include<iostream>
using namespace std;
int main()
{
    int score;
    cout<<"enter your score"<<endl;
    cin>>score;
    switch (score/10)
    {
    case 10:
    case 9:cout<<"your grade is A+"<<endl;
        break;
    case 8:cout<<"your grade is A"<<endl;
           break;
    case 7:cout<<"your grade is B"<<endl;
           break;
    case 6:cout<<"your grade is c"<<endl;
          break;
    case 5:cout<<"your grade is D"<<endl;
          break;
    case 0:cout<<"your grade is F"<<endl;
          break;
    
    
    default:cout<<"no output"<<endl;
        break;
    }
}