#include <iostream>

using namespace std;

int main()
{
    double c,f;
    cout << "What is the temperature in celsius: ";
    cin >> c;
    f = (9*c/5) + 32;
    cout << "The temperature in fahrenheit is: " << f << endl;
    return 0;
}
