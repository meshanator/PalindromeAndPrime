#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int n){
    string s = to_string(n);
    cout << "midpoint: " << s.length()/2 << endl;

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
    std::cout << "Hello, World!" << std::endl;

    int n = 119811;

    bool ip = isPalindrome(n);
    cout << "is palindrome: " << ip << endl;

    bool isp = isPrime(1);
    cout << "isprime: " << isp << endl;

    return 0;
}