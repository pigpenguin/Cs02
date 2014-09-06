#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double d;
    double  x1, x2, y1, y2;
    cout << "Input an ordered pair seperated by a space (x y): ";
    cin >> x1 >> y1;
    cout << "Input another orderer pair: ";
    cin >> x2 >> y2;
    d = sqrt(pow((x2 - x1), 2) + pow((y2-y1),2));
    cout << "The distance between these two points is: " << d << endl;
    return 0;
}
