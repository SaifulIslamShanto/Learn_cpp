#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string NameOfStudent;
    int roll;

    ofstream StudentInfo;
    StudentInfo.open("./StudentD.txt", ios::out | ios::app);

    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter Your Name :";
        getline(cin, NameOfStudent);
        StudentInfo << NameOfStudent << "\t";

        cout << "Enter Your Roll : ";
        cin >> roll;
        StudentInfo << roll << endl;

        cin.ignore();
    }

    StudentInfo.close();

    return 0;
}
