// display simple arthemetic calculator
#include <iostream>
#include <cmath>

using namespace std;



int main() {
  float x, y;
  cout << "Enter values X and Y : " << endl;
  cin >> x >> y;
  cout << "x = " << x << "         " << "y = " << y << endl;
  cout << "Sum = " << x+y << "       " << "Difference = " << x-y << endl;
  cout << "Product = " << x*y << "   " << "Division = " << x/y << endl;
}
