#include <iostream>
using namespace std;

int main()
{

    int num1;
    int num2;
    int num3;
    int largest;

    cout << "Enter Marks : \t" << endl;
    cin >> num1;

    if (num1 >= 90)
    {
        cout << "Grade A";
    }
    else if (num1 >= 80)
    {
        cout << "Grade B";
    }
    else if (num1 >= 70)
    {
        cout << "Grade c";
    }
    else if (num1 >= 60)
    {
        cout << "D";
    }

    else
    {
        cout << "Fail";
    }

    return 0;
}
