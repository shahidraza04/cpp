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

    car(car &obj){
         year=2025;
        brand="toyota";
        model=obj.model;
        price=obj.price;
        mileage=obj.mileage;
        weight=obj.weight;
        tankCapacity=obj.tankCapacity;
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
};



int main(){
    cout<<"obj1"<<"\n";
    car m1("hilex",12000000.00,18.00,2500,1000);
    m1.disp();

    cout<<"obj2"<<"\n";
    car m2(m1);
    m2.disp();
    return 0;
}
