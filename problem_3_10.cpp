#include<iostream>
using namespace std;
enum Winner{player1,player2,tie};
int main()
{
    int choice1,choice2;
    Winner winner;
    cout<<"choose rock(0),scissor(1),paper(2)"<<endl;
    cout<<"player#1"<<endl;
    cin>>choice1;
    cout<<"player#2"<<endl;
    cin>>choice2;
    switch (choice2-choice1)
    {
    case 0:winner=tie;
        break;
    case 1:winner=player1;
        break;
    case 2:winner=player2;
        break;
    case -1: winner=player2;
        break;
    case -2:winner=player2;
        break;
       
    default:
        cout<<"get nothing"<<endl;
        break;
    }
    if (winner==tie) cout<<"match tied"<<endl;
    else if(winner==player1) cout<<"player#1 wins"<<endl;
    else if(winner==player2) cout<<"player#2 wins"<<endl; 

}