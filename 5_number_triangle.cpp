/*
    1
    1 2
    1 2 3 
    1 2 3 4

*/
#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Please Enter Size: \n";
    cin >> size;

//method 1-------------------------------------------------
    for (int i=1; i<=size; i++){
        
        for (int  j=1; j<=i; j++){  
            cout << j << " ";
        }
        cout << "\n";
    }
//method 2--------------------------------------------------
    // for (int i=1; i<=size; i++){
    //     int value = 1;
        
    //     for (int  j=1; j<=i; j++){  
    //         cout << value++ << " ";
    //     }
    //     cout << "\n";
    // }

    return 0;
}