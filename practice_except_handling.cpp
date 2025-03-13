#include<iostream>
#include<string>
using namespace std;

void divide (int a, int b){
    try{
        if(b==0)
        {
            throw "divide by zero is not allowed";
        }
        cout <<"result:"<<a/b<<endl;
    }
    catch (const char*message)
    {
        cout<<"exception :"<<message<<endl;
    }
}
int main(){
    divide (10,2);
    divide (10,0);

    return 0;
}
