#include<iostream>
#include<math.h>
using namespace std;

// n = 123 
int ans = 0;
int i =0;
int main(){
    int n ;
    cin >> n;

    while(n!=0){
        int digit = n%10;
        ans = (digit * pow(10, i++))  + ans;
        n = n>> 1;
    }

    cout << "Answer is :" << ans << endl;
}