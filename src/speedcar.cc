#include <iostream>

using namespace std;

int main()
{

  int input, total = 0;
  float result;
  cout << " Enter number : ";

  int count = 0;

  while (true)
  {
    cin >> input;
    int number = input;

    if (number == 0)
    {
      break;
    }

    if (number > 0)
    {
      total = total + number;
      count++;
      result = float(total / count);
    }
  }
  cout << result;
}
