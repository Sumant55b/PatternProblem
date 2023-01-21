/*
    
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
 */
#include <iostream>
using namespace std;

int main(){

    int size;
    cout << "Please Enter size: \n";
    cin >> size;

   for(int i=1; i<=size; i++){
        for(int j=1; j<=size-i; j++){
            cout << " ";
        }
        
        for(int k=1; k<=i; k++){
            char value = k+64;
            cout << value++;
        }
        char rev = i-1;
        for(int m=1; m<=i-1; m++){
            char value = rev+64;
            cout << value;
            rev--;
        }
        cout << "\n";
    }

    return 0;
}