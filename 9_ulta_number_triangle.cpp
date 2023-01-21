/*
    1 2 3 4 
    1 2 3
    1 2
    1

*/
#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Please Enter Size: \n";
    cin >> size;



    for (int i=1; i<=size; i++){
        
        for (int  j=1; j<=size+1-i; j++){  
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}