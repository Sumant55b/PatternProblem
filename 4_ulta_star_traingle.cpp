/*
    * * * *
    * * *
    * *
    * 
*/
#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Please Enter Size: \n";
    cin >> size;
   
//method 1 -------------------------------------------
    for (int i=1; i<=size; i++){
        for (int  j=1; j<=size+1-i; j++){
            cout << "* ";
        }
        cout << "\n";
    }


//method 2 -------------------------------------------------
    // for (int i=size; i>=1; i--){
    //     for (int  j=i; j>=1; j--){
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }


//method 3  -------------------------------------------------
// int x = size;
// for (int i=1; i<=size; i++){
//         for (int  j=1; j<=x; j++){
//             cout << "* ";
//         }
//         x--;
//         cout << "\n";
//     }

    return 0;
}