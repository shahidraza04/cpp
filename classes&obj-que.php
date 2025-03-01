#include<iostream>
#include<string>
using namespace std;
class Book {
    private:

    public:
    string bname;
    string bauthor;
    string bcategory;
    double bprice;
    int bpages;
    void accept(){
        cout<<"enter Book details:";
        cout<<"book:name author category price pages:";
        cin>>bname>>bauthor>>bcategory>>bprice>>bpages;
    }
    void display (){
        cout<<"bookname="<<bname<<"\n"<<"bookauthor="<<bauthor<<"\n"<<"bookcategory="<<bcategory<<"\n"<<"bookprice="<<bprice<<"\n"<<"bookpages="<<bpages<<"\n";
    }

};
int main(){
    Book b1,b2;
    b1.bname="Rich Dad Poor Dad";
    b1.bauthor="Robert Kiyosaki";
    b1.bcategory="Financial Wisdom for Building Generational Wealth";
    b1.bprice=297.00;
    b1.bpages=336;
    b1.display();
    
    b2.accept();
    b2.display();
    b2.bname="Rich Dad Poor Dad";
    b2.bauthor="Robert Kiyosaki";
    b2.bcategory="Financial Wisdom for Building Generational Wealth";
    b2.bprice=297.00;
    b2.bpages=336;
    b2.display();
    return 0;
}
