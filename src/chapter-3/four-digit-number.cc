// 10

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int input;
  cout << "Input number";
  cin >> input;

  int total = 0;

  while (input)
  {
    int number = input % 10;
    total += number;
    input /= 10;
  }
  cout << " Total = " << total;
}
