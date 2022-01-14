#include <iostream>
using namespace std;


class chef{
    public:
    void makeChicken(){
        cout<<"The chief prepares the chicken "<<endl;
    }
    void makeSalad (){
        cout<<"The chief prepares a salad "<<endl;

    }
    void makeSpecialDish(){
        cout<<"The chief has ordered his men to prepare a mutton biriyani"<<endl;
    }
};

class indianChef : public chef{
    public:
     void makePasta( ){
         cout<<"The chief is good at making pasta "<<endl;
     }
      void makeSpecialDish(){
        cout<<"The chief has ordered his men to prepare a chicken kabab"<<endl;
    }
};

int main(){
    chef chef;
    chef.makeChicken();

    indianChef x ;
    x.makeChicken();
    x.makePasta( );
    x.makeSpecialDish();
}
