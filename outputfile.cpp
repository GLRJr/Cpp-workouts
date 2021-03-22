#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream output_file("names.txt");
    if (!output_file)
    {
        cout << "The file was not found." << endl;
        return -5;
    }

    string name = "I am Invinciable!";
    output_file << name;
    return 0;
}