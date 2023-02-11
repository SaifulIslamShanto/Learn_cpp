#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string name;
    int age;

    ofstream studentFIle;
    studentFIle.open("./Student_Details.txt", ios::out | ios::app);

    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter Your Name: ";
        getline(cin, name);
        studentFIle << name << "\t";

        cout << "Enter Your age : ";
        cin >> age;
        studentFIle << age << endl;

        cin.ignore();
    }

    studentFIle.close();

    return 0;
}