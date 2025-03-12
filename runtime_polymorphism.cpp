#include<iostream>
#include<string>
using namespace std;

class Animal
{
    public :
    void makesound (){
     //cout<< "Dog Barks"<<endl;
    }
};
class Dog : public Animal{
 public : void makesound (){
    cout <<"Dog barks"<<endl;
 }
};
class Cat : public Animal{
    public : void makesound (){
        cout <<"cat Meows"<<endl;
    }
};

int main(){

    Animal animal;

    Dog dog;
    Cat cat;
    animal.makesound();
    dog.makesound();  cat.makesound();
    return 0;

}
