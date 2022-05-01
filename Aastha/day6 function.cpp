#include<iostream>
using namespace std;
int sum(int a, int b );
int main()
{
  int num1, num2, total=0; 
  cout<<"Enter 2 no.s:";
  cin>>num1>>num2;
  total=sum(num1, num2);
  cout<<"\n total="<<total;
}
int sum(int a, int b)
{
  int result;
  result=a+b;
  return result;
}
