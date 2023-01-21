/*
    A 
    A B 
    A B C
    A B C D
*/
#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Please Enter Size: \n";
    cin >> size;
   

    for (int i=1; i<=size; i++){
        char value = 65;
        for (int  j=1; j<=i; j++){
            cout << value++ << " ";
        }
        cout << "\n";
    }
    
    return 0;
}