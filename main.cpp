#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int n){
    string s = to_string(n);

    int counterFromRightSide = s.length() - 1;
    for (int i = 0; i < s.length()/2; i++){
        if(s[i] != s[counterFromRightSide])
            return false;
        counterFromRightSide--;
    }
    return true;
}

bool isPrime(int n){
    for (int i = 2; i < n; i ++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main() {
    int n = 11911;

    bool isPal = isPalindrome(n);
    cout << "Is palindrome: " << isPal << endl;

    bool isPrim = isPrime(n);
    cout << "Is prime: " << isPrim << endl;

    return 0;
}