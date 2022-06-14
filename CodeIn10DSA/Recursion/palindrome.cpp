#include<iostream>
#include<string>
using namespace std;

int helper(string s, int start, int end) {
    if(start>=end){
        return 1;
    }
    if(s[start] != s[end]) {
        return 0;
    }

    return helper(s, start+1, end-1);
}

int isPalindrome(string s) {
    int n = s.size()-1;
    return helper(s, 0, n);
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    if(isPalindrome(str)){
        cout << "Its palindrome" << endl;
    } else {
        cout << "Its not palindrome" << endl;
    }
}