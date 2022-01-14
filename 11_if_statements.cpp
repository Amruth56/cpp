#include <iostream>
using namespace std;
int main()
{
    bool isMale = false;
    bool isTall = true;

    if(isMale && isTall){
        cout<<"You are Tall male";
    }
    else if(isMale && !isTall){
        cout<<"You are a short male";
    }
    else if(isTall &&!isMale){
        cout<<"You are a tall female";
    }
    else{
        cout<<"You are either short or you are a female";
    }
}