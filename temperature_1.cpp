#include <iostream>

using namespace std;

int main()
{
    double c,f;
    char s;
    cout << "Type the temperature followed by scale code (example 32 f): ";
    cin >> c >> s;
    if(s == 'c'){
        f = (9*c/5) + 32;
        cout << "The temperature in fahrenheit is: " << f << endl;
    }else if(s == 'f'){
        f = (5/9) * (c-32);
        cout << "The temperature in celsius is: " << f << endl;
    }else{
        cout << s << " Is not an accepted scale code\n";
    }
    return 0;
}
