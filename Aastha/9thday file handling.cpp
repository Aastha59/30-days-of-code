#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream obj("file.txt");
    obj<<"hello";
    obj.close();
    
}
