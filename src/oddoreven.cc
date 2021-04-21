#include <iostream>

using namespace std;

bool oddOrEven(int n){
  if(n%2 == 0){
    return 0;
  }
  return 1;
}

int main(){

 int n;
 cout << "Enter a number \n";
 cin >> n;

 if(oddOrEven(n) == 0){
   cout << "Even";
 } else {
   cout << "Odd";
 }

}
