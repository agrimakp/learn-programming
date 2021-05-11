//62
#include <iostream>

using namespace std;

int main()
{
  int number = 1;
  cout << "(a)" << endl;
  for (int i = 1; i <= 13; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << number << " ";
      number += 1;
    }
    cout << "\n";
  }


  cout << "(2)" << endl;
  int num = 0;
  for (int i = 1; i <= 13; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (num % 2 == 0)
      {
        cout << "0 ";
      }
      else
      {
        cout << "1 ";
      }

      num += 1;
    }
    cout << "\n";
  }
}
