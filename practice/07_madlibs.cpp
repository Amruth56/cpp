#include<iostream>
using namespace std;
int main()

{   string color, pluralNoun, name;
    cout<<"Enter the color"<<endl;
    getline(cin,color);    
    
    cout<<"Enter the pluralNoun"<<endl;
    getline(cin,pluralNoun);    
    
    cout<<"Enter the name"<<endl;
    getline(cin,name);

    cout<<"Roses are "<< color<<endl;
    cout<<pluralNoun<<" are blue"<<endl;
    cout<<"Always remember 'NO ONE CARES ABOUT "<<name<<"'"<<endl;

}
