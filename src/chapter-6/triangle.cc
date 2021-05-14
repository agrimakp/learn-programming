
#include <iostream>

using namespace std;

int main()
{
  int number = 1;
  cout << "(a)" << endl;
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << number << " ";

    }
    number += 1;
    cout << "\n";
  }


  cout << "(b)" << endl;
 for (int i = 5; i >= 1; i--)
  {
   for (int j = 0; j < i; j++)
    {
      cout << " * ";

    }
    cout << "\n";
  }
}
