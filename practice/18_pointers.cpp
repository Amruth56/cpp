#include<iostream>
using namespace std;

int main(){
    int age = 20;
    int *pAge =&age;
    float gpa = 8.4;
    float *pGpa = &gpa;
    string name = "Amruth Mandappa T S";
    string *pName = &name;

    cout<< "Age Address " << &age<<endl;
    cout<<"Age address "<<pAge<<endl;
    cout<< "Age "<<*pAge<<endl;

    // dereferencing
     
    cout<<*&gpa;

}