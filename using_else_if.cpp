#include<iostream>
using namespace std;
int main()
{
    char language;
    cout<<"english/french/german/italy or Russia?(e/f/g/i/r)?"<<endl;
    cout<<"please enter your language"<<endl;
    cin>>language;
    if (language=='e') cout<<"welcome to bangladesh"<<endl;
    else if (language=='f') cout<<"Bon jour,bangladesh"<<endl;
    else if(language=='g') cout<<"guten tag, bangladesh"<<endl;
    else if(language=='i') cout<<"Bon giorno, bangladesh"<<endl;
    else if(language=='r') cout<<"Dobre utre, bangladesh"<<endl;
}