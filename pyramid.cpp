#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
    int i,j,count;
    int rows;
    int getch();

    cout << " How many Rows?";
    cin >> rows;

    for ( i = 1; i <= rows; i++ )
    {
        cout << i;   

        for( j= 1; j <= i; j++)
        {
            cout << "*";
            
        }

        cout << endl;

    }

    return 0;
}