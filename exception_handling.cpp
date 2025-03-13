#include<iostream>
#include<string>
using namespace std;
//exception handling

int main()
{
try 
{
    int age = 17 ;
    if (age >=18)
    {
        cout <<"access granted you are old enough";
    }
    else
    {
        throw (age); //throw an exception with the value age if age is less than 18.
    }
}
catch (int num)
{
    cout<<"access denied - you must be at least 18 year old."<<endl;
    cout <<"age is :"<<num;
}

    return 0;
}
