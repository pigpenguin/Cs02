#include <iostream>

using namespace std;

int main()
{
    double m,x,w,l;
    cout << "How long is the beam: ";
    cin >> l;
    cout << "How heavy is the mass: ";
    cin >> m;
    cout << "How far away is the mass: ";
    cin >> x;
    m = (x*w*(l-x))/l;
    cout << "The maximum bending moment is: " << m << endl;
    return 0;

}
