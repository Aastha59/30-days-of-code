#include<iostream>
using namespace std;
float cal_area(float r);
int main()
{
    float area, radius;
    cout<<"Enter radius of circle:";
    cin>>radius;
    area=cal_area(radius);
    cout<<"Area of circle with radius"<< radius <<" ="<<area;
}
float cal_area(float radius)
{
    return(3.14*radius*radius);
}
