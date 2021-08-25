// race.cpp

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

void player1(int &space1)
{
    Sleep(300);
    space1 += ( rand() % 5 ) + 1;
}
void player2(int &space2)
{
    Sleep(300);
    space2 += ( rand() % 5 ) + 1;
}
void draw(int space1, int space2)
{
    cout << "------------------------------------------------------------------------------------------------------------------\n";
    cout << setw(space1) << "<p1>\n";
    cout << "------------------------------------------------------------------------------------------------------------------\n";
    cout << setw(space2) << "<p2>\n";
    cout << "------------------------------------------------------------------------------------------------------------------\n";
    cout << endl << endl << endl << endl << endl << endl << endl << endl
         << endl << endl << endl << endl << endl << endl << endl << endl
         << endl << endl << endl << endl;

}
int main()
{
    int space1 = 0, space2 = 0;
    srand( time( NULL ) );
    while(true)
    {
        draw(space1, space2);
        player1(space1);
        player2(space2);
        if (space1 > 120 && space1 > space2)
        {
            draw(space1, space2);
            cout << "player 1 wins";
            return 0;
        }
        if (space2 > 120)
        {
            draw(space1, space2);
            cout << "player 2 wins";
            return 0;
        }
        else if(space1 == space2)
        {
            cout << "tie";
        }
    }


}


