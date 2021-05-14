#include <iostream>

using namespace std;


int main()
{
  int number, remainder, reverse = 0;
  cout << " Input a number to reverse : ";
  cin >> number;


  while (number != 0){
    remainder = number % 10;   // 1234  r = 4            // 123 r =3
    reverse = reverse * 10 + remainder; // 0*10+4 = 4   // 4*10+3 = 43
    number /= 10;                       // 1234/10 = 123 // 12
  }

  cout << reverse;
}
