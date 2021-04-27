#include <iostream>

using namespace std;

int main()
{
  int n;
  float result = 0;
  cout <<" Input limit : ";
  cin >> n;

  for(int i = 1; i <= n; i++){
      result = result + (float)1 / i;  // type casting
  }

  cout << result;

}
