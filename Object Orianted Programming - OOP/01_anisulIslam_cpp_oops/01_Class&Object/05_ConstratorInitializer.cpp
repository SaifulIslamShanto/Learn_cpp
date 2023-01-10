#include <iostream>
using namespace std;
class Student
{
public:
    const int admissionFee;
    const int ExamFee;
    int id;

    Student(int x, int y, int z) //-> Constatctor
        : admissionFee(x),
          ExamFee(y)
    {
        cout << admissionFee << endl;
        cout << ExamFee << endl;
        id = z;
        cout << id << endl;
    }
};

int main()
{
    Student s1(1500, 500, 5);
    return 0;
}