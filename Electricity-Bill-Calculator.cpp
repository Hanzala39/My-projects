 #include <iostream>
using namespace std;

int main()
{

    int units;

    float bill;

    cout << "Enter Consumed Units : \t";
    cin >> units;

    if (units > 100)
    {
        bill = units * 5;
    }

    else if (units >= 101)
    {
        bill = units * 7;
    }
    else if (units >= 300)
    {
        bill = units * 10;
    }

    cout << "Total Bill : " << bill << endl;
    return 0;
}
