#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
    //-> String Library Function

    //-> 1_String_Lenght
    /*     char name1[] = "Saiful islam";
        int len = strlen(name1);
        cout << "Length Of String : " << len << endl; */

    //-> 2_String_copy;
    /*     char name_1[] = "Saiful ";
        char name_2[] = "Islam";

        cout << "Name 1 Is : " << name_1 << " & Name 2 Is :" << name_2 << endl;
        strcpy(name_2, name_1);
        cout << "after Copy From Name 1 to Name 2 : " << name_2; */

    //-> 3_String_concatination;

    /*     char name_1[] = "Saiful ";
        char name_2[] = "Islam";

        // strcat(name_1, name_2);
        strcat(name_2, name_1);
        cout << name_2 << endl; */

    //-> 4_String_Uppaercase_&_Lowercase;
    /*     char name_1[] = "Saiful ";
        strupr(name_1);
        cout << "String UpperCase :" << name_1 << endl;
        strlwr(name_1);
        cout << "String LowerCase :" << name_1 << endl; */

    //-> 5_String_Compare
    char name_1[] = "Saiful";
    char name_2[] = "Saiful";

    int value = strcmp(name_1, name_2);
    if (value == 0)
    {
        cout << value << " This Value IS equal";
    }
    else
    {
        cout << value << " This Value IS NotEqual";
    }

    return 0;
}