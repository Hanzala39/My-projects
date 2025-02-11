#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << " Enter Number : \t";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0)
    {
        cout << "Multiple of 3 and 5 ";
    }

    else
    {
        cout << " Is Not multiple of 3 and 5 ";
    }
}
