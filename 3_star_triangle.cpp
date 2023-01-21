/*
    *
    * *
    * * *
    * * * *
*/
#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Please Enter size: \n";
    cin >> size;
   

    for (int i=1; i<=size; i++){
        for (int  j=1; j<=i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    
    return 0;
}