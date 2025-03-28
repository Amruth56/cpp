#include <iostream>
using namespace std;

class movie
{
private:
    string rating;

public:
    string title;
    string hero;
    // double rating;

    movie(string aTitle, string aHero, string aRating)
    {
        title = aTitle;
        hero = aHero;
        setRating(aRating);
    }

    void setRating(string aRating)
    {
        if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        {
            rating = aRating;
        }
        else
        {
            rating = "NR";
        }
    }

    string getRating()
    {
        return rating;
    }
};
int main()
{
    movie k("kgf chapter 1", "Yash", "G");

    k.setRating("Hello");

    cout << "Rating of the movie is " << k.getRating(); 
    // we cannot access k.ratins as it is provate. so we create a another function string getRating to return rating.
}