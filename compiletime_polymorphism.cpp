#include<iostream>
#include<string>
using namespace std;

class math 
{
  public:
  int add (int a, int b)
{
    return a + b;
}
double add (double a, double b)
{
    return a+b;
}
};
int main() 
{
  math obj ;
  cout<<"sum (int):"<<obj.add(18,24)<<endl;
  cout<<"sum (double):"<<obj.add(18.5,24.5)<<endl;
    return 0;
}
