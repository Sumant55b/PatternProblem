/*
        * 
        * 
    * * * * *
        *
        * 
*/
#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Please Enter Size of odd no: \n";
    cin >> size;
   

    int value = (size/2)+1;
    
    for (int i=1; i<=size; i++){       

        for (int  j=1; j<=size; j++){
            
            if (i==value || j==value){
                cout << "* ";
            }else{
                cout << "  ";
            }            
        }
        cout << "\n";
    }
    
    return 0;
}