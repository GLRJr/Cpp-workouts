#include <iostream>

using namespace std;

int main()
{
    int test[3] = {};

    cout << "Please enter a number to store...";
    cin >> test[0];

    cout << "please add another..";

    cin >> test[1];

    cout << "please add another..";

    cin >> test[2];

    cout << "The numbers you entered were: ";

    for (int i = 0; i < 2; i++ )
    {
    cout << test[i] << ",";
    }
    cout << test[2] << "." << endl;

    return 0;
}