#include <iostream>

using namespace std;

int main()
{
    int input;


    cout << "please Enter a number to check if it's even or odd:" << endl; 
   
    cin >> input;

    if (input % 2 == 0)
    cout << "even"<< endl;
    else 
    cout << "odd" << endl;
    

    return 0;
}