#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n , num , digit , rev =0;
  cout<<"enter the number :";
  cin >>num;
  n = num;

  do
  {
    digit = num % 10;
    rev = (rev * 10) + digit;
    num = num / 10;
  }
  while (num != 0);
  cout <<"the reverse is:"<<rev<<endl;

  if ( n == rev and n>0)
  cout <<"this is a palindrome";
  else cout <<"this is not palindrome";

    return 0;
}
