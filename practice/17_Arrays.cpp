#include <iostream >
using namespace std;
int main(){
    int array[3][2]={
        {1,2},{2,3},{7,9}

    };
    
    for (int i=0; i<3; i++){
        for(int j=0; j<2;j++){
            cout<<array[i][j];

        }
        cout<<endl;
        
    }

}