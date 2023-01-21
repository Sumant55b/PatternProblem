/*
    1
    2 3 
    4 5 6 
    7 8 9 10

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
            cout << value++ << " ";
        }
        cout << "\n";
    }
    
    return 0;
}