#include<iostream>
#include<string>
using namespace std;

class mobile {
private:
    int year;
    string brand;
    string name;
    string os;
    double ram;
    double size;
    int price;

public:
    // Constructor to initialize member variables
    mobile(string brand, string name, string os, double ram, double size, int price) {
        this->year = 2025;  // Default value
        this->brand = brand;
        this->name = name;
        this->os = os;
        this->ram = ram;
        this->size = size;
        this->price = price;
    }

    // Function to accept values (if needed)
    void accept(string brand, string name, string os, double ram, double size, int price) {
        this->brand = brand;
        this->name = name;
        this->os = os;
        this->ram = ram;
        this->size = size;
        this->price = price;
    }

    // Function to display mobile details
    void display() {
        cout << "Brand: " << brand << "\n";
        cout << "Model: " << name << "\n";
        cout << "Operating System: " << os << "\n";
        cout << "RAM: " << ram << " GB\n";
        cout << "Size: " << size << " Inches\n";
        cout << "Price: " << price << "\n";
    }

    // Destructor
    ~mobile() {
        cout << "Destructor called\n";
        cout << "Memory cleared\n";
    }
};

int main() {
    // Create an object of class mobile
    mobile m1("Apple", "iPhone 16", "iOS 17", 8.0, 6.9, 175900);

    // Display the detail
};
