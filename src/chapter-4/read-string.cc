//54
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
    char word[14] = "WORDPROCESSOR";


    printsubstr(word, 0, 4);
    cout << " ";
    printsubstr(word, 4, 10);
    cout << endl;
    cout << word[0] << "." << word[4] << ".";
    cout << endl;

    printsubstr(word, 0, 4);
    cout << endl;
    printsubstr(word, 4, 10);



}
