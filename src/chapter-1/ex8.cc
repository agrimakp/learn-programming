// compute and display value of x, x=a/b-c

#include <iostream>
#include <cmath>

using namespace std;

int main(){
  float a,b,c;
  float result;
  cout << "Enter 3 numbers";
  cin >> a >> b >> c;
  if (b == c){
   cout << "Infinity \n";
   return 1;
  }

  result = a / (b-c);


  cout << result;
}
