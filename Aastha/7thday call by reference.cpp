#include<iostream>
using namespace std;
void add(int *n);
int main()
{
  int num=2;
  cout<<"The value of num before calling the function:"<<num;
  add(&num);
  cout<<"\nThe value of num after calling the function:"<<num;
  return 0;
}
void add(int *n)
{
  *n=*n+10;
  cout<<"\nThe value of num n the called function:"<<*n;
}
