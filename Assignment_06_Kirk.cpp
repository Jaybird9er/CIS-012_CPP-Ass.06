#include <iostream>
using namespace std;

int main ()
{
    // variables
    int num = 0;

    // inputs
    cout << "Enter an integer between 0 and 35: ";
    cin >> num;

    // outputs
    if (num > 35 || num < 0)
    {
        cout << "Invalid input.";
    }
    else if (num < 10)
    {
        cout << num;
    }
    else
    {
        cout << static_cast<char>(num + 55);
    }
    cout << endl;

    return 0;
}
