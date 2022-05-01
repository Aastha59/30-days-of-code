#include<iostream>
using namespace std;
void add(int n);
int main()
{
  int num=2;
  cout<<"The value of num before calling the function:"<<num;
  add(num);
  cout<<"The value of num after calling the function:"<num;
}
void add(int n)
{
  n=n+10;
  cout<<"The value of num in the called function:"<<n;
}
