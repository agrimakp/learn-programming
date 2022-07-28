// 15

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int customerCode, calls;
  cout << " Input customer code: ";
  cin >> customerCode;

  cout << " Input number of calls: ";
  cin >> calls;


  if(calls <= 100){
    float totalCost = 250 * calls;
    cout << "BILL = Rs." << totalCost;
  } else {
    float difference = calls - 100;
    float extraCost = difference * 1.25;
    float totalCost = ( 250 * calls ) + extraCost;
    cout << "BILL = Rs." << totalCost;
  }



}
