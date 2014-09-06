#include <iostream>

using namespace std;

int main(){
    double t1,t2,t3,t4,t5;
    cout << "Please input 5 test scores seperated by spaces: ";
    cin >> t1 >> t2 >> t3 >> t4 >> t5;
    cout << "The average is: " << (t1+t2+t3+t4+t5)/5 << endl;
    return 0;
}
