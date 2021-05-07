// 12

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int m,n;
  cout << "Input m and n : ";
  cin >> m >> n;
  if(m%n == 0){
    cout << m << "is a multiple of" << n << endl;
  } else {
    cout << m << "is not a multiple of" << n << endl;
  }
}
