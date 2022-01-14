#include<iostream>
using namespace std;
int main()

{   string text="Hello World";
    cout<<text<<endl;
    
    cout<<text.length()<<endl;
    
    cout<<text[1]<<endl;
    
    cout<<text.find("llo",1)<<endl;
    
    cout<<text.substr(1,6)<<endl; //Its gonna start with character positioned at 1 and gonna take 5 characters

    text[0]=' p';
    cout<<text<<endl;


    return 0;
}