#include <iostream>

using namespace std;

 int m;
int main()
{
  int negative = 0, positive = 0;
  cout << " Enter numbers : ";

  while (true)
  {
    int m;
    cin >> m;

    if (m == 0)
    {
      break;
    }

    if (m > 0)
    {
      positive++;
    }
    else
    {
      negative++;
    }
  }

  cout << "Negative: " << negative << endl;
  cout << "Positive: " << positive << endl;
}
