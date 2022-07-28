// 13

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float num1, num2, num3;
  cout << "Input 3 numbers ";
  cin >> num1 >> num2 >> num3;

  float sum = num1 + num2 + num3;
  float average = (num1 + num2 + num3)/2;
  float largest = num1 > num2 ? num1 > num3 ? num1 : num3 : num2 > num3 ? num2 : num3;
  float smallest = num1 < num2 ? num1 < num3 ? num1 : num3 : num2 < num3 ? num2 : num3;

  cout << "Sum = " << sum << endl;
  cout << "Average = " << average << endl;
  cout << "Largest = " << largest << endl;
  cout << "Smallest = " << smallest << endl;

}
