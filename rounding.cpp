#include <iostream>

using namespace std;

int main(){
    double t1,t2,t3,t4,t5,t6;
    int temp;
    cout << "Please input 5 decimal numbers seperated by spaces: ";
    cin >> t1 >> t2 >> t3 >> t4 >> t5;
    t6 = t1 + t2 + t3 + t4 + t5;
    temp = t6*10;
    if(temp%10 > 4){
        temp = t6+1;
    }else{
        temp = t6;
    }
    cout << temp << endl;
    return 0;
}
