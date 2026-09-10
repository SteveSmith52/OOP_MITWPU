#include <iostream>
using namespace std;

int num = 100;  // Global variable

int main()
{
    int num = 50;  // Local variable

    cout << "Local variable: " << num << endl;
    cout << "Global variable: " << ::num << endl;

    return 0;
}


