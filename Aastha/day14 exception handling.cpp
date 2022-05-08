#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"\nEnter 2 no:";
    cin>>num1>>num2;
    try
    {
        if(num2==0)
        throw(num2);
        else 
        cout<<"\n Result is:"<<num1/num2;
    }
    catch(int num2)
    {
        cout<<"Division by 0 is not posible";
    }
    cout<<"\nEND OF PROGRAM";
    return 0;
}
