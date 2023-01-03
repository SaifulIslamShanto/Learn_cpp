#include <iostream>
using namespace std;

enum Meal
{
    breakFast,
    Lunch,
    Dinner
};

int main()
{
    enum Meal eat;
    eat = Dinner;
    cout << eat << endl;
    return 0;
}
