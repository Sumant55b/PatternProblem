/*
    12345
     1234
      123
       12
        1 
*/
#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size: ";
    cin >> size;

    for (int i=1; i<=size; i++){
        for(int j=1; j<=i-1; j++){
            cout << " ";
        }
        for(int k=1; k<=size+1-i; k++){
            cout << k;
        }
        cout << "\n";
    }
    
    return 0;
}