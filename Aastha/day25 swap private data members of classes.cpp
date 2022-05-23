#include<iostream>
using namespace std;
class class_2;
// defining class 1 having friend function swap
class class_1
{
   // member data
protected:
int num1;
public:
       class_1()
       {
           num1=10;
       }
       // member function to show the value of member data
void show()
       {
cout<<"\n Value of Class 1 : "<<num1;
       }
       // friend function declaration
friend void swap(class_1 *num1, class_2 *num2);
};
// defining class 2 having friend function swap
class class_2
{
   // member data
protected:
int num2;
public:
       class_2()
       {
           num2=20;
       }
// member function to show the value of member data
       void show()
       {
cout<<"\n Value of Class 2 : "<<num2;
       }
       // friend function declaration
friend void swap(class_1 *num1, class_2 *num2);
};
// definition of swap friend function
void swap(class_1 *no1, class_2 *no2)
{
int no3;
   no3=no1->num1;
   no1->num1=no2->num2;
no2->num2=no3;
   }
int main()
{
class_1 a;
class_2 b;
cout<< "Values befor Swap";
a.show();
b.show();
swap(&a, &b);
cout<< "\n\nValues after Swap";
a.show();
b.show();
return 0;
}
