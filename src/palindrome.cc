#include <iostream>

using namespace std;

int main()
{
  int input;
  cout << " Enter number : ";
  cin >> input;

  int number = input;
  int reverse = 0;
  while (number > 0)
  {

    int d = number % 10;
    number = number / 10;
    reverse = (reverse * 10) + d;
  }
  // cout << reverse << "--" << input;
  if (reverse == input)
  {
    cout << "True";
  }
  else
  {
    cout << "False";
  }
}
