#include <iostream>
 
/* fstream header file for ifstream, ofstream,
   fstream classes */
#include <fstream>
 
using namespace std;
 
// Driver Code
int main()
{
    // Creation of fstream class object
    fstream fio;
 
    string line;
    fio.open("sample.txt", ios::trunc | ios::out | ios::in);
 
    // Execute a loop If file successfully Opened
    while (fio) {
          getline(cin, line);
         if (line == "-1")
            break;
 
        // Write line in file
        fio << line << endl;
    }

    fio.seekg(0, ios::beg);
 
    while (fio) 
      getline(fio, line);
 
        cout << line << endl;
    }

    fio.close();
 
    return 0;
}
