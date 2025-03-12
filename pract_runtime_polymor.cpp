#include<iostream>
#include<string>
using namespace std;

class Car
{
    public :
    void enginesound(){
    //sound of cars.
    }
};

class Sportcar : public Car{
    public : void enginesound (){
        cout <<"sports car : Vroom Vroom........"<<endl;
    }
};

class Electriccar{
    public : void enginesound () {
        cout <<"electric car : silent sound..."<<endl;
    }
};
int main(){

    Car c;
    Sportcar s;
    Electriccar e;

    c.enginesound();
    s.enginesound();
    e.enginesound();


    return 0;
}
