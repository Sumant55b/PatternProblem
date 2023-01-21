/* 
    * * * *
    *     *      
    *     *
    * * * * 
*/
#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Please Enter Size : \n";
    cin >> size;
   
    
    for (int i=1; i<=size; i++){       
        for (int  j=1; j<=size; j++){
            
            if (i==1 || i==size || j==1 ||j==size){
                cout << "* ";
            }else{
                cout << "  ";
            }            
        }
        cout << "\n";
    }
    
    return 0;
}