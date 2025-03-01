//write a c++ program to calculate following series: (1) + (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4+5....n) 
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number:";
    cin >>n;

    int totalSum = 0;
    for (int i = 1; i <= n; ++i) {
        int currentSum = 0;
        for (int j = 1; j <= i; ++j) {
            currentSum += j;
        }
        totalSum += currentSum;
    }
     cout << "The num is: " << totalSum ;
    return 0;
}
