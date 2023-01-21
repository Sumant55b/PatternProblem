/*
    1
    1 3 
    1 3 5
    1 3 5 7
*/
#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Please Enter size: \n";
    cin >> size;
    
    for (int i=1; i<=size; i++){
        int value =1;
        for (int  j=1; j<=i; j++){
            cout << value <<" ";
            value += 2;
        }
        cout << "\n";
    }
    
    return 0;
}