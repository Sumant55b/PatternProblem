/*
    1 
    3 5
    7 9 11

*/
#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Please Enter Size: \n";
    cin >> size;
   
    int value = 1;
    for (int i=1; i<=size; i++){       
        for (int  j=1; j<=i; j++){
            cout << value << " ";
            value += 2;
        }
        cout << "\n";
    }
    
    return 0;
}