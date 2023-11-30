#include "Display.h"
#include <iostream>
#include "Source.cpp"

using namespace std;

void Display::Menu()
{
    int c = 0;
    while (c != 4)
    {

        cout << "                     Menu\n";
        cout << "         1..........Print Something: \n";
        cout << "         2..........Do Something else:\n";
        cout << "         3..........Do a third thing \n";
        cout << "         4..........Quit program" << endl;


        
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "1";
            break;
        case 2:
            cout << "something else";
            break;
        case 3:
            cout << "Third thing";
            break;
        case 4:
            cout << "you just quit";
            return;

        default:
            cout << "Not a Valid Choice. \n"
                << "Choose again.\n";
            break;
        }
    }
}
