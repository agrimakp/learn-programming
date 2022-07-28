// 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float demand_rate, setup_cost, holdng_cost;
  cout << "Input values Demand Rate (d), Setup cost (s), Holding cost (h)";
  cin >> demand_rate >> setup_cost >> holdng_cost;

  float eoq = sqrt((2 * demand_rate * setup_cost) / holdng_cost);

  cout << "EOQ = " << eoq << endl;

  float tbo = sqrt((2 * setup_cost) / (demand_rate * holdng_cost));

  cout << "TBO = " << tbo << endl;
}
