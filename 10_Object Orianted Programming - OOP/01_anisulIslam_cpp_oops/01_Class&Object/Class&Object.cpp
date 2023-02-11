#include <iostream>
using namespace std;

// -> Creating a Class

class student
{
public:
    int id;
    double gpa;
};

int main()
{
    student shanto, sojib; //-> Diclear object variable

    //-> Diclear shanto object
    shanto.id = 3;
    shanto.gpa = 3.25;
    // Print out
    cout << "Shanto " << shanto.id << " is ID & Gpa Is " << shanto.gpa << endl;

    //-> Diclear sojib object
    sojib.id = 5;
    sojib.gpa = 3.80;
    // Print out
    cout << "Sojib " << sojib.id << " is ID & Gpa Is " << sojib.gpa << endl;

    return 0;
}