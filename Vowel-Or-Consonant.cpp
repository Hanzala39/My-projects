          #include <iostream>
using namespace std;

int main()
{

    char ch;

    cout << "Enter Chracter : \t";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o')
    {
        cout << "Vowles";
    }
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O')
    {
        cout << "Vowels";
    }
    else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        cout << "Consonant";
    }
    else
    {
        cout << "Invalid input ";
    }
    

    return 0;
}
