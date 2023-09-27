#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "Functions.h"
using namespace std;

int main()
{
    char type;
    bool correct = false;
    double lastResult = 0.0;

    cout << "Welcome to the Mathematical Calculator!\n" << endl;

    while (true)
    {
        display(lastResult);

        cin >> type;

        if (type == 'Q' || type == 'q')
        {
            break;
        }

        lastResult = function(type, correct);

        if (correct)
        {
            cout << "Result: " << lastResult << endl;
        }
        else
        {
            cout << "Invalid input. Please enter a valid operation: ";
        }

        Sleep(3000);
        system("cls");
    }

    return 0;
}
