#include <iostream>
using namespace std;

class shape
{
public:
    double dim1, dim2;

    shape(double dim1, double dim2) //-> Constractor
    {
        this->dim1 = dim1;
        this->dim2 = dim2;
    }

    virtual double area()
    {
        return 0;
    }
};

class Triangle : public shape
{
public:
    // double dim1, dim2;
    Triangle(double dim1, double dim2)
        : shape(dim1, dim2)
    {
    }

    double area()
    {
        return 0.5 * dim1 * dim2;
    }
};

class Rectangle : public shape
{
public:
    // double dim1, dim2;
    Rectangle(double dim1, double dim2)
        : shape(dim1, dim2)
    {
    }

    double area()
    {
        return dim1 * dim2;
    }
};

int main()
{
    shape *p; //-> SuperClass
    Triangle t(10, 20);
    Rectangle r(10, 20);

    p = &t;
    cout << "Triangle => " << p->area() << endl;

    p = &r;
    cout << "Rectangle => " << p->area() << endl;

    return 0;
}