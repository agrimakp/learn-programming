#include <iostream>

using namespace std;

int main()
{
  int number, result = 0, r;
  cout << "Input a number ";
  cin >> number;

  while (number > 0)
  {
    r = number % 10;
    result += r;
    number /= 10;
  }

  cout << result;

}
