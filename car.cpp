#include <iostream>

using namespace std;

int main(){
    int year, weight;
    double price;
    cout << "What year was your car manufactured: ";
    cin >> year;
    cout << "How much does it weigh: ";
    cin >> weight;
    if(year < 1901){
        if(weight < 2700){
            price = 26.50;
        }else if(weight > 3800){
            price = 56.50;
        }else{
            price = 35.50;
        }
    }else if(year > 1999){
        if(weight < 3500){
            price = 49.50;
        }else{
            price = 62.50;
        }
    }else{
        if(weight < 2700){
            price = 35;
        }else if(weight > 3800){
            price = 62.50;
        }else{
            price = 45.5;
        }
    }
    cout << "Your registration fee will be: " << price << endl;
    return 0;
}
