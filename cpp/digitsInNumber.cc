#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n;
  int result = 0;
  cout << "Input number : ";
  cin >> n;

  while(n > 0)
  {

    int x = n % 10;
    result = result + x;
    n = n / 10;

  }
  cout << result;
}
