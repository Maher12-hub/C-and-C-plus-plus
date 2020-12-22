#include<iostream>
using namespace std;
int main()
{
    char player1,player2;
    cout<<"please enter players:"<<endl;
    cout<<"player one="<<endl;
    cin>>player1;
    cout<<"player two="<<endl;
    cin>>player2;
    if (player1=='r' && player2=='s') cout<<"player one win:"<<endl;
    else if(player2=='r' && player1=='s') cout<<"player two wins:"<<endl;
    else if(player1=='s' && player2=='p') cout<<"player one wins:"<<endl;
    else if(player2=='s' && player1=='p') cout<<"player two wins:"<<endl;
    else if(player1=='p' && player2=='r') cout<<"player one wins:"<<endl;
    else if(player2=='p' && player1=='r') cout<<"player two wins:"<<endl;
    else if (player1==player2) cout<<"match draw"<<endl;
}