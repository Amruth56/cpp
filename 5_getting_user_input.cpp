#include<iostream>
using namespace std;

int main()
{

//     string name;
//     cout<<"Enter your name :"<<endl;
//     cin>> name ;

//     cout<<"Hello "<<name<<" how are you doing nowadays"<<endl;

    // For Text input we can use getline command

    string text;
    cout<<"Enter your name :";
    getline(cin,text);
    cout<<"Hello "<<text;
}