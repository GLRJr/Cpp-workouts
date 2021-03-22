#include <iostream>

using namespace std;

int main ()
{
    int num1;
    int num2 = 6;

    cout << "please enter a number... " << endl;
    cin >> num1;

    cout << "you entered " << num1 << "!"<< endl;
    cout << "lets do the math!" << endl;
    cout << (num1 + num2) -4 << endl;

    return 0;
}