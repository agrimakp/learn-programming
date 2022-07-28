#include <iostream>

using namespace std;

int main()
{
  int limit;

  cout << "Total number of items : ";
  cin >> limit;

  string items[limit];
  float prices[limit];

  for (int i = 0; i < limit; i++)
  {
    cout << "Enter item name : ";
    cin >> items[i];

    cout << "Enter item price : ";
    cin >> prices[i];
  }

  cout << "*** LIST OF ITEMS ***" << endl;
  cout << "Item    " << "Price    " << endl;

  for (int i = 0; i < limit; i++)
  {
    cout << items[i] << "   " << "RS: " << prices[i] << endl;
  }
}
