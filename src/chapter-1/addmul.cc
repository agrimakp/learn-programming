#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b;
  char e;
  cout << "Enter  2 numbers";
  cin >> a;
  cin >> b;

  cout << "Enter Operator (+,-,*,/)";
  cin >> e;

  int result = 0;

  switch (e)
  {
  case '+':
    result = a + b;
    break;
  case '-':
    result = a - b;
    break;
  case '*':
    result = a * b;
    break;
  case '/':
    result = a / b;
    break;
  default:
    cout << "Unsupported operator";
    return 1;
  }

  cout << a << e << b << " = " << result;
  return 0;
}
