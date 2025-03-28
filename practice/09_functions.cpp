#include <iostream>
using namespace std;

void sayHi (){
    cout<<"Hello World";
}

void names( string name, int age){
    cout<< "Hello " << name <<"Aged " << age;
}

int main()
{   cout<<"Top \n";
    sayHi();
    cout<<"\nBottom\n";
    names("Amruth ", 20) ;
    return 0;
}