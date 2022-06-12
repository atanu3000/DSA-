#include<iostream>
using namespace std;

int powerN(int num, int power){
    if(power == 1){
        return num;
    }
    return num * powerN(num, power-1);
}

int main() {
    int num, x;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the power: ";
    cin >> x;

    cout << "ans: " << powerN(num, x);
}