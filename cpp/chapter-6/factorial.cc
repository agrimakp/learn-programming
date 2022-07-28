#include <iostream>

using namespace std;


int main()
{
  int number, result = 1;
  cout << "Input a number : ";
  cin >> number;

  if (number > 0)
  {

    for (int i = 1; i <= number; i++ )
      {
      result *= i;
      }

  } else {

    cout << "Factorial of negative number not active";

  }

  cout << result;

}
