#include <iostream>

using namespace std;

int main()
{

  // Designated initialization.
  int n[10] = {[0] = 1, [4] = 5};

  for (int i = 0; i < 10; i++)
  {
    cout << n[i];
  }


}
