#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    string name;

    ofstream file;
    file.open("student.txt", ios::out | ios::app);

    // file << "I'm saiful islam shanto" << endl;
    cout << "Enter Your Name: ";
    getline(cin, name);

    file << "welcome " << name << endl;
    file.close();

    cout << "Data is Stored" << endl;
    return 0;
}