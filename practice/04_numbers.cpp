#include<iostream>
#include<cmath>

using namespace std;

int main()

{   
    cout<<pow(2,3)<<endl;
    cout<<sqrt(25)<<endl;
    cout<<round(25.543)<<endl;
    cout<<fmax(25,543)<<endl;
    cout<<ceil(25.1)<<endl;
    cout<<floor(25.9)<<"\n"<<endl;
    int num1 = 10,num2,num3,num4,a,b,c,d;
    cout<<num1<<endl;

    num1++;
    cout<<num1<<endl;

    num2=20;
    num2--;
    cout<<num2<<endl;

    num3=30;
    num3+2;
    cout<<num3<<endl;

    num4=40;
    cout<<num4<<endl;
    num4-2;
    cout<<num4<<endl;

    num4+=60;
    cout<<num4<<endl;

    a=9;
    b=5;

    c=a/b;
    d=a%b;
    cout<<c<<"\t"<<d<<endl;

    cout<<9.0/5<<endl;
    cout<<9/5.0<<endl;
}