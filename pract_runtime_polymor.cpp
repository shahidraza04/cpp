#include<iostream>
#include<string>
using namespace std;

class Car
{
    public :
    void enginesound (){

    }
};

class Sportcar : public Car{
    public : void enginesound (){
        cout <<"vroom vroom......."<<endl;
    }
};

class Electriccar{
    public : void enginesound () {
        cout <<"silent sound..."<<endl;
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
