#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int input;
    bool cont = true;
    char in;
    ofstream output;
    output.open("output.txt");
    
    while(cont){
        cout << "Please input an integer: ";
        cin >> input;
        for(int i = 0; i <= input; i+=2){
            output << i << " ";
        }
        output << endl;
        for(int i = 1; i <= input; i+=2){
            output << i << " ";
        }
        cout << "Would you like to go again? (y/n): ";
        cin >> in;
        if(in == 'n'){
            cont = false;
        }
    }
    output.close();
    return 0;
}
