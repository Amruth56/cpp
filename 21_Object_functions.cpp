#include <iostream >
using namespace std;
class student {
    public :
        string name;
        string major;
        double gpa;

        student (string aName, string aMajor, double aGpa)
        {
        name = aName;
        major = aMajor;
        gpa = aGpa ;
        } 
    bool hasHonors(){
        if (gpa>=9.6){
            return true;
        }
            return false;
        
    }
};

int main(){
    student A ("Amruth", "Software developer", 9.5);
    student B("Anant","Engineer",9.8);
    cout<<"1st student name is :"<<A.name <<endl;

    cout<<A.hasHonors();
    return 0;

}