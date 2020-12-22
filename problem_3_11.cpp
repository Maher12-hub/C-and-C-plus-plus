#include<iostream>
using namespace std;
enum Winner{player1,player2,tie};
int main()
{
    Winner winner;
    int choice1,choice2;
    cout<<"choose rock(0),scissor(1),paper(2)"<<endl;
    cout<<"player#1"<<endl;
    cin>>choice1;
    cout<<"player#2"<<endl;
    cin>>choice2;
    int n=(choice1-choice2+3)%3;
    winner=(n==0?tie:(n==1?player2:player1));
    if (winner==tie) cout<<"match tied"<<endl;
    else if(winner==player1) cout<<"player#1 wins"<<endl;
    else if(winner==player2) cout<<"player#2 wins"<<endl;
}