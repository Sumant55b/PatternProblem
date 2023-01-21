/*
    1 
    0 1
    1 0 1 
    0 1 0 1
    1 0 1 0 1

*/
#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Please Enter Size: \n";
    cin >> size;

//method 1-------------------------------------------------- 
    // for (int i=1; i<=size; i++){    
    //        int value;
    //        if(i%2 == 0) value = 0;
    //        else value = 1; 

    //     for (int  j=1; j<=i; j++){
    //         cout << value << " ";

    //         if(value == 0) value = 1;
    //         else value = 0;
    //     }
    //     cout << "\n";
    // }
    

//method 2----------------------------------------------------
for (int i=1; i<=size; i++){    

        for (int  j=1; j<=i; j++){
            if((i+j)%2==0) 
                cout << "1 ";
            else 
                cout << "0 ";
        }
        cout << "\n";
    }
    return 0;
}