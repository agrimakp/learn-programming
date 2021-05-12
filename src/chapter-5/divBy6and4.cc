//65
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int number = 100;
  cout << "number divisible by 6 and 4 are: " << endl;
  for (int i = 6; i < number; i++)
  {
    if ((i % 6 == 0) && (i % 4 == 0))
    {
      cout << i << endl;
    }
  }
}
