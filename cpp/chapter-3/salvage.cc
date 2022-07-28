// 6

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  float depreciation, purchasePrice, salvageValue, yearsOfService;
  cout << "Enter Depreciation, Purchase Price, Years Of Service : ";
  cin >> depreciation >> purchasePrice >> yearsOfService;

  salvageValue = purchasePrice - ( depreciation * yearsOfService );

  cout << salvageValue;

}
