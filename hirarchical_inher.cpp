#include<iostream>
#include<string>
using namespace std;

class A
{
    public :
    int a,b;
    float x,y;
    void intvalue()
{
    cout <<"enter 2 nos=";
    cin >>a>>b;
}
void floatvalue ()
{
    cout <<"enter 2 nos=";
    cin >>x>>y;
}
};

class B : public A
{
    public : 
    int c;
    void Addint ()
    {
        c = a+b;
        cout <<"Add="<<c;
    }
};

class C : public A
{
    public:
    float z;
    void floatAdd ()
    {
        z = x+y;
        cout<<"add="<<z;
    }
};
int main()
{
B e;
e.intvalue();
e.Addint();

C e1;
e1.floatvalue();
e1.floatAdd();
    return 0;
}
