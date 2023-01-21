/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/
#include<iostream>
using namespace std;

int main(){

    int row, col;
    cout << "Please Enter row: \n";
    cin >> row;
    cout << "Please Enter col: \n";
    cin >> col;

    for (int i=1; i<=row; i++){
        for (int  j=1; j<=col; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
    
    return 0;
}