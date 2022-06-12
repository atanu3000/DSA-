#include<iostream>
using namespace std;

int fact(int n) {
    
    /*if(n == 1 || n == 0){
        return 1;
    }
    int ans n * fact(n-1);*/

    return ((n==1||n==0) ? 1 : (n * fact(n-1)));
}

int main(){
    cout << "Enter a digit: ";
    int n;
    cin >> n;
    cout << "factorial of " << n << " = " << fact(n);
}