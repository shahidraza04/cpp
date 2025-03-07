#include<iostream>
using namespace std;

// Parent class
class Animal {
public:
    void sound() {
        cout << "Animals make sounds!" <<"\n";  // Behavior of the parent class
    }
};

// Child class inherits from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks!" << "\n";  // Behavior specific to Dog class
    }
};

int main() {
    Dog myDog;  // Creating an object of the child class (Dog)
    
    myDog.sound();  // Inherited from Animal class (Parent class)
    myDog.bark();   // Defined in Dog class (Child class)
    
    return 0;
}
