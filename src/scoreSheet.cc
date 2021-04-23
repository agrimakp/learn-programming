#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int m, count;
  int passed = 0, failed = 0;
  cout << " Enter number of students : ";
  cin >> count;

  while (count > 0)
  {
    cout << " Enter marks of students : ";
    cin >> m;

    if (m >= 45)
    {
      passed++;
    }
    else
    {
      failed++;
    }

    count--;
  }

  cout << "Passed: " << passed << endl;
  cout << "Failed: " << failed << endl;
}
