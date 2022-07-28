#include <iostream>
#define N 10

using namespace std;

int main()
{

  int num = 678272;
  int box1[N] = {0};
  int count = 0;


  while (num > 0)
  {
    int rem = num % 10;
    box1[rem] += 1;
    num = num / 10;

    if(box1[rem] > 1){
      cout << "repeated " << rem;
    }
  }



}
