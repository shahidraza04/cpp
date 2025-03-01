//program to convert decimal number to hexadecimal.
#include<iostream>
#include<iomanip>  
using namespace std;

int main() {
    int decimalNum;

   
    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    
    cout << "The hexadecimal equivalent of " << decimalNum << " is: " 
         << std::hex << decimalNum <<"/n";

    return 0;
}
