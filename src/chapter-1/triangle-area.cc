#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float a, b, c, result, s;

  cout << "Input the sides of a triangle";
  cin >> a >> b >> c;

  s = (a + b + c) / 2;
  result = sqrt(s * (s - a)*(s - b)*(s - c));

  cout << result;
}
