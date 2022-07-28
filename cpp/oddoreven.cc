#include <iostream>

using namespace std;

bool oddOrEven(int n)
{
  if (n % 2 == 0)
  {
    return true;
  }
  return false;
}

int main()
{

  int n;
  cout << "Enter a number \n";
  cin >> n;

  if (oddOrEven(n))
  {
    cout << "Even";
  }
  else
  {
    cout << "Odd";
  }
}
