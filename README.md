## Palindrome and Prime

This is a basic c++ program to check if a number is a palindrome and whether it is prime.

### Definition

A palindrome is a string that is the when its characters are read both backwards and forwards. Eg. Racecar

A prime number is a number that is only divisible by 1 and itself. Eg. 7

### Palindrome method

Here we convert the number to a string, then compare the first and last characters moving inward towards the middle. If at any point the corresponding characters don't match we return false, otherwise we return true. 

```cpp
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
```



### Prime method

This is a brute force method. We simply iterate the numbers up to n, repeatedly checking if its a factor of n. We return false if it is, otherwise we return true.

```cpp
bool isPrime(int n){
    for (int i = 2; i < n; i ++){
        if(n%i == 0)
            return false;
    }
    return true;
}
```
### Demo

![alt text](https://raw.githubusercontent.com/meshanator/PalindromeAndPrime/master/demo1.PNG "demo")