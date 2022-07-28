//63
#include <iostream>

using namespace std;

int main()
{
  int number, y;
  cout << "Input number" << endl;
  cin >> number;
  // else if ladder
  if (number > 0)
  {
    y = 1;
  }
  else if (number == 0)
  {
    y = 0;
  }
  else
  {
    y = -1;
  }

  cout << "(a) " << y << endl;

  // conditional

  number > 0 ? y = 1 : number == 0 ? y = 0
                                   : y = -1;

  cout << "(b) " << y << endl;

  // nested if

  if (number)
  {
    if (number != 0)
    {

      if (number < 0)
      {
        y = -1;
      }
      else
      {
        y = 1;
      }
    } else {
      y = 0;
    }

  }
  cout << "(c) " << y << endl;

}
