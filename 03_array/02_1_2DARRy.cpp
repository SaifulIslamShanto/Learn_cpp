#include <iostream>
using namespace std;

int main()
{
    int A[2][3];

    cout << "Enter The Elements For The Matrix" << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "A [" << row << " ] [" << col << "] : ";
            cin >> A[row][col];
        }
    }
    cout << "\n----------------------- \n\n";

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << A[row][col] << " ";
        }
    }
}