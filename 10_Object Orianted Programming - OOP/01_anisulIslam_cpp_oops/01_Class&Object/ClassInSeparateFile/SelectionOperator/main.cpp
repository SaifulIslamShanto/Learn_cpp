#include <iostream>
#include "helloselectop.h"
using namespace std;

int main()
{
    HelloselectOp ob;
    HelloselectOp *p = &ob;
    p ->display();
    return 0;
}
