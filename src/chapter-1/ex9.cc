// compute and display value of x, x=a/b-c

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float c, f, result;
    cout << "Convert to Fahrenheit \n";
    cin >> c;
    result = (9 * c / 5) + 32;
    cout << result;

    cout << "Convert to Celsius \n";
    cin >> f;
    result = (f - 32) * 5 / 9;

    cout << result;
}
