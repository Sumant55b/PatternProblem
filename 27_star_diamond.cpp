/*
    
        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *
 */
#include <iostream>
using namespace std;

int main(){

    int size;
    cout << "Please Enter size of odd no: \n";
    cin >> size;

    int star = 1;
    int space = size/2;

   for(int i=1; i<=size; i++){

        for(int j=1; j<=space; j++){
            cout << " ";
        }
        for(int k=1; k<=star; k++){
            cout << "*";
        }
        if(i < (size/2)+1){
            space--;
            star +=2;
        }else{
            space++;
            star -=2;
        }
        
       
        cout << "\n";
    }

    return 0;
}