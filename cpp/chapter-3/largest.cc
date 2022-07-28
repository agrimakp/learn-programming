// 11 largest without using if

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b, c;
  cout << "Input 3 numbers";
  cin >> a >> b >> c;

 int largest = a > b ?  a > c ? a : c : b > c ? b : c;

  cout << largest;
}
