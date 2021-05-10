//58
#include <iostream>

using namespace std;

int main()
{

  int count = 0;
  int sum = 0;
  cout << "The numbers are : ";

  for (int i = 100; i < 200; i++)
  {
    if (i % 7 == 0)
    {
      cout << i << " ";
      count++;
      sum += i;
    }
  }
  cout << endl
       << "Count : " << count << endl;

  cout << "Sum : " << sum << endl;
}
