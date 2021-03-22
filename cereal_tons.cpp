#include <stdio.h>
#include <iostream>


using namespace std;

int main()
{
    
    int metric_tonn = 25;
    int cereal_ounces;
    
    
    cout << "Enter the Number of Ounces in your Cereal Box: \n";
    cin >> cereal_ounces;

    int cereal_tons = cereal_ounces / metric_tonn ; 

    cout << "Your cereal's wieght in tons is " << cereal_tons << "!\n";
    
    return 0;
}