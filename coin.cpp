#include <iostream>
#include <string>
using namespace std;

int main(){
    int cents, q, d, n;
    string output;
    cout << "How many pennies do you have: ";
    cin >> cents;
    // Calculating quarters
    q = cents/25;
    cents = cents%25;
    
    // Calculating dimes
    d = cents/10;
    cents = cents%10;

    // Calculatin nickles
    n = cents/5;
    cents = cents%5;
    
    //Building the output string
    output = "You have ";

    if(q > 0){
        output += q;
        if(q == 1){
            output += " quarter ";
        }
        else{
            output += " quarters ";
        }
    }
    
    if(d > 0){
        output += d;
        if(d == 1){
            output += " dime ";
        }
        else{
            output += " dimes ";
        }
    }

    if(n > 0){
        output += n;
        if(n == 1){
            output += " nickle ";
        }
        else{
            output += " nickles ";
        }
    }

    if(cents > 0){
        output += cents;
        if(cents == 1){
            output += " penny";
        }
        else{
            output += " pennies";
        }
    }

    cout << output << endl;

}

