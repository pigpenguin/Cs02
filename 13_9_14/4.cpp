#include <iostream>

using namespace std;

int main()
{
    int input;
    bool cont = true;
    char in;
    while(cont){
        cout << "Please input an integer: ";
        cin >> input;
        input -= input%2;
        for(int i = 0; i <= input; i+=2){
            cout << i << endl;
        }
        cout << "Would you like to go again? (y/n): ";
        cin >> in;
        if(in == 'n'){
            cont = false;
        }
    }
    return 0;
}
