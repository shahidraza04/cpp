#include<iostream>
#include<string>
using namespace std;

class emp{
    private:
    int eid;
    string ename;
    string role;
    string dept;
    float year;
    double sal;

    public:
     //static variable.
     // variables defined as static are created only once for entire class.
     // static variables are shared amoung all objects of a class.
     static int cnt;
     
     //static method.
     static void cntemp(){
        // //static data members can be only accessed in static methods.
        cnt++;
     }

     emp(int id,string name,string role,string dept,float year,double sal){
        // this : keyword is used to refer to 
        // current class object invoking the constructor or function.
        cntemp(); //call to static method
        this->eid=id;
        this->ename=name;
        this->role=role;
        this->dept=dept;
        this->year=year;++
        this->sal=sal;
    }

    void disp(){
        cout<<"id:"<<this->eid<<"\n";
        cout<<"name:"<<this->ename<<"\n";
        cout<<"role:"<<this->role<<"\n";
        cout<<"dept:"<<this->dept<<"\n";
        cout<<"years:"<<this->year<<"\n";  
        cout<<"sal:"<<this->sal<<"\n"; 
    }

    static void showempcnt(){
        cout <<"number of emp:"<<cnt<<"\n";
    }
};

//static data member initilization.
int emp::cnt=0;


int main(){
    emp e1(777,"shahid","devops","technology",2,250000.00);
    e1.disp();

    emp e2(250,"raza","software developer","technology",1.5,80000.00);
    e2.disp();
    
    emp e3(350,"cz","blokchain developer","technology",3,300000.00);
    e2.disp();
    return 0;
}
