/*
    
        A
       ABC
      ABCDE
     ABCDEFG
    ABCDEGFHI

 */
#include <iostream>
using namespace std;

int main(){

    int size;
    cout << "Please Enter size: \n";
    cin >> size;

    int extra = 1;
    for(int i=1; i<=size; i++){
        char value = 65;
        for(int j=1; j<=size-i; j++){
            cout << " ";
        }
        for(int k=1; k<=extra; k++){
            cout << value++;
        }

        extra +=2;
        cout << "\n";
    }

    return 0;
}