#include <iostream>
#include <string>
using namespace std;

//-> Class
class Student
{
public:
    int id;
    string Name;

    //-> Mathod
    void Put_details(int i, string n)
    {
        id = i;
        Name = n;
    }

    //-> Mathod ->
    void get_details()
    {
        cout << "Id : " << id << endl;
        cout << "Name : " << Name << endl;
    }
};

int main()
{
    Student s1;
    // s1.id = 35;
    // s1.Name = "Saiful Islam SHanto";

    int s_id;
    string s_name;

    cout << "ENter Id OF Student : ";
    cin >> s_id;
    cout << "ENter Name OF Student : ";
    cin >> s_name;

    s1.Put_details(s_id, s_name);
    s1.get_details();
}