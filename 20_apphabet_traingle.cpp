/*
            A
          A B
        A B C
      A B C D
    A B C D E
 */
#include <iostream>
using namespace std;

int main()
{

  int size;
  cout << "Please Enter size: \n";
  cin >> size;

  for (int i = 1; i<=size; i++)
  {
    char value = 65;
    for (int j=1; j<=size-i; j++)
      cout << "  ";
    
    for(int k=1; k<=i; k++)
      cout << value++ << " ";
    
    cout << "\n";
  }

  return 0;
}