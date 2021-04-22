// multiplication table
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, result;
  cout << "Enter a number : ";
  cin >> n;

  for (int i = 0; i <= 10; i++)
  {
    result = n * i;
    cout << n << " x " << i << " = " << result << "\n";
  }
}
