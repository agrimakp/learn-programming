// 5

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  int number, count = 0;
  cout << "Enter number : ";
  cin >> number;

  int input = number;

  while (input)
  {
    count++;
    input /= 10;
  }

  input = number;
  int deno = pow(10, count - 1);
  while (input)
  {

    cout << input << endl;
    input %= deno;
    deno /= 10;
  }
}
