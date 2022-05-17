
#include <iostream>
using namespace std;
class Complex
{
private:
int real, imag;
public:
Complex()
{ cout<<"Enter real part : ";
cin>>real;
 cout<<"Enter imaginary part : ";
cin>>imag;}
friend ostream & operator << (ostream &out, const Complex &c);
};
ostream & operator << (ostream &out, const Complex &c)
{
out << c.real;
out << "+" << c.imag <<"i"<<endl;
return out;
}
int main()
{
cout<<"Apoorav Kumar"<<endl<<"21BCS2182"<<endl;
Complex c1;
cout << "The complex object is ";
cout << c1;
return 0;
}
