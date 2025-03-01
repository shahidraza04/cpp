#include<iostream>
#include<string>
using namespace std;

inline int max (int a,int b){return a>b?a:b;}

int main(){
    //call
    int res = max (15,50);
    cout<<"res="<<res<<"\n";
    return 0;
}
