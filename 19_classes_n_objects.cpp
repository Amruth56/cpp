#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int cost;
};

int main(){
    Book book1 ;
    book1.title = "Learn cpp";
    book1.author = "Lenden limmons";
    book1.cost = 990;

    Book book2;
    book2.title = "Learn python";
    book2.author= "God father";
    book2.cost = 1500;

    cout<< book1.title<<endl;
    cout<< book2.cost<<endl;
}    
