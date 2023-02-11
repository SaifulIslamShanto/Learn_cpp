#include <iostream>
using namespace std;
// -> Create function in class
class student
{
public:
    int id;
    double gpa;

    void display()
    {
        cout << id << " is ID & Gpa Is " << gpa << endl;
    }
};
int main()
{
    student shanto; //-> Diclear object variable

    //-> Diclear shanto object
    shanto.id = 3;
    shanto.gpa = 3.25;
    // Print out
    shanto.display();
    return 0;
}