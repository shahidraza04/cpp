#include<iostream>
#include<string>
using namespace std;

class emp {
private:
    int eid;
    string ename;
    string role;
    string dept;
    float year;
    double sal;

public:
   
    emp(int id, string name, string role, string dept, float year, double sal) {
        this->eid = id;
        this->ename = name;
        this->role = role;
        this->dept = dept;
        this->year = year;
        this->sal = sal;
    }

    
    void disp() {
        cout << "id: " << this->eid << "\n";
        cout << "name: " << this->ename << "\n";
        cout << "role: " << this->role << "\n";
        cout << "dept: " << this->dept << "\n";
        cout << "years: " << this->year << "\n";  
        cout << "sal: " << this->sal << "\n"; 
    }

    
    friend void addBonus(emp &obj);
};


void addBonus(emp &obj) {
    obj.sal += 15000;  
}

int main() {
    
    emp e1(777, "Shahid", "DevOps", "technology", 2.5, 250000.00);
    e1.disp();

    addBonus(e1);
    e1.disp();

    emp e2(250, "Raza", "Developer", "development", 1, 80000.00);
    e2.disp();

    return 0;
}
