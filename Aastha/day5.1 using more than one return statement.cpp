#include<iostream>
using namespace std;
int check_relation(int a, int b);
int main()
{
    int a=3, b=5, res;
    res=check_relation(a,b);
    if(res==0)
    cout<<"\n equal";
    if(res==1)
    cout<<"\n a is greater than b";
    if (res==-1)
    cout<<"\n b is greater than a";
}
int check_relation(int a, int b)
{
    if(a==b)
    return 0;
    if(a>b)
    return 1;
    else if(a<b)
    return -1;
}

