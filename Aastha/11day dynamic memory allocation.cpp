#include<iostream>
using namespace std;
int main()
{
 int *ptr;
 float *p;
 ptr=new int;
 p= new float;
 
 *ptr=42;
 *p=5.6;
 cout<<*ptr<<endl;
 cout<<*p;
 
 delete []ptr;
}

