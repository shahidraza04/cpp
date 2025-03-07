#include<iostream>
#include<string>
using namespace std;

class A 
{
    public:
    int a,b;
};

class B : public A
{
    public:
    void value ()
    {
        cout <<"enter 2 number=";
        cin >>a>>b;
    }
};

class C : public B
{
    public :
    int c;
    void add ()
    {
        c= a+b;
        cout <<c;
    }
};

class D : public B
{
    public :
    int d;
    void sub()
    {
        d =a-b;
        cout <<d;
    }
};

int main(){
{
    C e;
    e.value();
    e.add();

    D e1;
    e1.value();
    e1.sub();
};
    return 0;
}
