#include <iostream>

using namespace std;

int main(){ 
    
    int rows;
    int i, j;

    cout << "please Enter Rows" << endl;
    cin >> rows;

for (i = rows; i >=1; i--)
{
    for (j = 1; j <=i; j++)
    {
    cout << "*";
    }
    cout <<" \n";
}
    

    return 0;
}