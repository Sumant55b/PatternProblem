/*
    1 
    A B
    1 2 3
    A B C D
    1 2 3 4 5
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
        
            
            if (i%2 == 0){
                cout << value++ << " ";
            }else{
                cout << j << " ";
            }            
        }
        cout << "\n";
    }
    
    return 0;
}