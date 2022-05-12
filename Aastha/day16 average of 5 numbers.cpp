#include <iostream>

using namespace std;



int main() {

 float s1,s2,s3,s4,s5;

 float total=0.00, average=0.00;



cout << "Enter the marks of five subjects:\n";

cin >>s1 >> s2 >> s3 >> s4 >> s5;
 total= s1 + s2 + s3 + s4 + s5;

 average= total / 5;

cout << "The total marks are: "<< total << "/500"<<endl;

 cout<< "Average is: " << average <<endl;
 int percentage=(total/500)*100;
 cout<<"percentage is"<<percentage;

return 0;  

}

