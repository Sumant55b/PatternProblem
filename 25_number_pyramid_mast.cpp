/*
    
        1
       121
      12321
     1234321
    123454321
 */
#include <iostream>
using namespace std;

int main(){

    int size;
    cout << "Please Enter size: \n";
    cin >> size;

    for(int i=1; i<=size; i++){
        for(int j=1; j<=size-i; j++){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            cout << k ;
        }
        int x = i-1;
        for(int m=1; m<=i-1; m++){
            
            cout << x-- ;
        }
        cout << "\n";
    }

    return 0;
}