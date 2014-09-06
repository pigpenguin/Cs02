#include <iostream>

using namespace std;

int main(){
    int cents, q, d, n;
    cout << "How many pennies do you have: ";
    cin >> cents;
    // Calculating quarters
    q = (cents-(cents%25))/25;
    cents = cents%25;
    
    // Calculating dimes
    d = (cents-(cents%10))/10;
    cents = cents%10;

    // Calculatin nickles
    n = (cents-(cents%5))/5;
    cents = cents%5;
    
    cout << "You need\n" << "Quarters: " << q << "\nDimes: " << d << "\nNickles: " << n << "\nPennies: " << cents << endl;

}
