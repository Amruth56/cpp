#include <iostream >
using namespace std ; 

class book {
    public :
    string title;
    string author;
    int price ;

    book(string aTitle, string aAuthor, int aPrice){
        title = aTitle;
        author = aAuthor;
        price = aPrice;
    
    }
};

int main(){
    book b1("One Piece", "Oda", 500);
  

    book b2("One Indian Girl", "Chethan Bagath", 250) ;
    b2.title="Two States";

    cout<<"Title of 1st book is :"<<b1.title<<endl;

    cout<<"Author of book 2 is :"<<b2.author<<endl;

    cout<<"Title of book 2 is :"<<b2.title;
   

}