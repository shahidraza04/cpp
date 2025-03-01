#include<iostream>
#include<string>
using namespace std;

class emp {
    int eid;
    string ename;
    string dept;
    string role;
    float year;
    double sal;

public:
    emp(int id, string name, string dept, string role, float year, double sal) {
        //this : keyword is used to refer to
        //current class object invoking the constructor or function.
        this->eid = id;
        this->ename = name;
        this->dept = dept;
        this->role = role;
        this->year = year;
        this->sal = sal;
    }

    void disp() {
        cout << "id: " << this->eid << "\n";
        cout << "name: " << this->ename << "\n";
        cout << "dept: " << this->dept << "\n";
        cout << "role: " << this->role << "\n";
        cout << "sal: " << this->sal << "\n";
    }
};

int main() {
    emp el(777, "Shahid", "Technology", "Software Developer", 2, 250000.00);
    el.disp(); 

    emp e2(786, "Raza", "Technology", "DevOps", 1.5, 80000.00);
    e2.disp();

    return 0;
}
