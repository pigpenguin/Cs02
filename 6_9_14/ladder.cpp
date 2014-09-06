#include <iostream>
#include <math.h>

#define PI 3.14159265
using namespace std;

int main()
{
    double height, length, theta;
    cout << "How long is your ladder: ";
    cin >> length;
    cout << "What angle is the ladder at: ";
    cin >> theta;
    height = length * sin(theta*PI/180);
    cout << "The height is: " << height << endl;
    return 0;
}
