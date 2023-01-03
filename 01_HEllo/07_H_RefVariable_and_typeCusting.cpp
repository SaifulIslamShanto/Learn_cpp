#include <iostream>
using namespace std;

// Global Variable

/* int a = 45;

int main()
{
    // local Variable
    int a = 10;
    cout << "Local Variable Is : " << a << endl;
    cout << "Global Variable Is : " << ::a << endl;
} */

/* int main()
{
    float d = 34.4f;
    long double e = 34.4l;

    -> dadatype literals [float,double & Long double]

    cout << "34.4 size : " << sizeof(34.4) << endl;
    cout << "34.4f size : " << sizeof(34.4f) << endl;
    cout << "34.4F size : " << sizeof(34.4F) << endl;
    cout << "34.4l size : " << sizeof(34.4l) << endl;
    cout << "34.4L size : " << sizeof(34.4L) << endl;

    cout << "Flaot size : " << sizeof(d) << endl;
    cout << "Flaot Value is : " << d << endl;
    cout << "\nlong double size : " << sizeof(e) << endl;
    cout << "long double Value is : " << e << endl;


    return 0;
} */

//-> Reference Variables

/* int main()
{
    int x = 20;
    int &y = x;

    cout << "X is : " << x << endl;
    cout << "Y is : " << y << endl;
} */

//->  Typecasting

int main()
{
    float a = 4.5;

    cout << "This Value is : " << (int)a << endl;
    cout << "This Value is : " << int(a) << endl;
}