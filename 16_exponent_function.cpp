#include<iostream>
using namespace std;

int power (int number , int exponent){
    int result;

    for(int i=0;i<exponent;i++){
        result=result*number;
    }
    return result;
}

int main()
{
    cout<<power(2,3)<<endl;
}