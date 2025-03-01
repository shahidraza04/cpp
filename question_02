//program to check whether number is palindrome or not?
#include<iostream>
using namespace std;

int main() {
    int num = 18;
    int acutualnum = num;
    int reversenum = 0, remainder;

    while (num != 0) {
        remainder = num % 10; 
        reversenum = reversenum * 10 + remainder; 
        num /= 10; 
    }

    if (acutualnum == reversenum) {
        cout <<acutualnum<< "is a palindrome"<<"\n";
    } else {
        cout <<acutualnum<< "is not a palindrome"<<"\n";
    }

    return 0;
}
