//55
#include <iostream>

using namespace std;

void printsubstr(char input[], int start, int length)
{
    for (int i = start; i < (start  + length); i++)
    {
        cout << input[i];
    }
}

int main()
{
    char word[17] = "ANIL KUMAR GUPTA";


    printsubstr(word, 0, 4);
    cout << " " << word[5] << ". ";
    printsubstr(word, 11, 5);
    cout << endl;

    cout << word[0] << "." << word[5] << ". ";
    printsubstr(word, 11, 5);
    cout << endl;

    printsubstr(word, 11, 5);
    cout << " " << word[0] << "." << word[5] << "." ;


}
