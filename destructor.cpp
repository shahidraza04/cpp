#include<iostream>
#include<string>
using namespace std;

class car{
    private:
    int year;
    string brand;
    string model;
    double price;
    double mileage;
    int weight;
    int tankCapacity;

    public:
  
    car(string mod,double amt,double mile,int kg,int ltr){
        year=2025;
        brand="toyota";
        model=mod;
        price=amt;
        mileage=mile;
        weight=kg;
        tankCapacity=ltr;
    }

    void accept(){
       
    }

    void disp(){
        cout<<"brand:"<<brand<<"\n";
        cout<<"year:"<<year<<"\n";
        cout<<"model:"<<model<<"\n";
        cout<<"price:"<<price<<"\n";
        cout<<"mileage:"<<mileage<<"kmpl"<<"\n";
        cout<<"weight:"<<weight<<"kg"<<"\n";
        cout<<"tankCapacity:"<<tankCapacity<<"ltr"<<"\n";
    }

    //destructor 
//destructor: a special type of function used to deallocated the money assigned to 
//and run closing procedure.

    ~car(){
        cout<<"destructor called"<<"\n";
        cout<<"memory cleared";
    }
};


int main(){
    car m1(" land cruiser",25000000.00,15.00,2900,110);
    m1.disp();

    return 0;
}
