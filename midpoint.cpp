#include <iostream>

using namespace std;

int main()
{
    double x,y;
    double  x1, x2, y1, y2;
    cout << "Input an ordered pair seperated by a space (x y): ";
    cin >> x1 >> y1;
    cout << "Input another orderer pair: ";
    cin >> x2 >> y2;
    x = (x2 + x1)/2;
    y = (y2 + y1)/2;
    cout << "The midpoint is (" << x << ", " << y << ")\n";
    return 0;
}
