#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    ifstream input_file("names.txt");
    if (!input_file) {
        cout << "File not found." << endl;
        return -6;
    }


    return 0;
}