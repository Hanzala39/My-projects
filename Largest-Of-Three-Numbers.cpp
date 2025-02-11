#include <iostream>
using namespace std;

int main()
{

    int num1;
    int num2;
    int num3;
    int largest;

    cout << "Enter First Number : \t" << endl;
    cin >> num1;

    cout << "Enter Secound Number : \t" << endl;
    cin >> num2;

    cout << "Enter Third Number : \t" << endl;
    cin >> num3;

    if (num1 >= num2 && num1 >= num3)
    {
        largest = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        largest = num2;
    }
    else if (num3 >= num1 && num3 >= num2)
    {
        largest = num3;
    }

    cout << " Largest Number is :" << largest << endl;
    return 0;     }
