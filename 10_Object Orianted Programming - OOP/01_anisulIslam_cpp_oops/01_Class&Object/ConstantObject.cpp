// -> Constant Object
#include <iostream>
using namespace std;

class contOBJ
{
public:
    void display1() const;
    void display2();
};

void contOBJ ::display1() const
{
    cout << "I'm COnstant Function" << endl;
}

void contOBJ ::display2()
{
    cout << "I'm None COnstant Function" << endl;
}

int main()
{
    const contOBJ obj;
    obj.display1();

    contOBJ obj2;
    obj2.display2();
    return 0;
}
