#include<iostream>
using namespace std;

int fib(int n){
    /*if(n==1 || n==0){
        return n;
    }

    //recursice call
    int recCall1 = fib(n-1);
    int recCall2 = fib(n-2);

    //small calculation
    int smallcal = recCall1 + recCall2;
    return smallcal;*/

    return ((n==1 || n==0) ? n : (fib(n-1)+fib(n-2)));
}

int main() {
    cout << "Enter the term: ";
    int n;
    cin >> n;
    cout << n << "th fibonacci term: " << fib(n);
    return 0;
}