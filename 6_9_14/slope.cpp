#include <iostream>

using namespace std;

int main()
{
    double slope;
    int x1, x2, y1, y2;
    cout << "Input an ordered pair seperated by a space (x y): ";
    cin >> x1 >> y1;
    cout << "Input another orderer pair: ";
    cin >> x2 >> y2;
    slope = (y2 - y1)/(x2 - x1);
    cout << "The slope between these two points is: " << slope << endl;
    return 0;
}
