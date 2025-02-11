#include <iostream>
using namespace std;

int main()
{

    char ch;

    cout << "Enter character ";

    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << ch  << "  Is Lower case Character";
    }

    else if (ch >= 'A' && ch <= 'Z')
    {

        cout <<ch << " Is Upper case Character";
    } 
      else if (ch >='0' && ch <= '9')
      {
        cout << ch << "Is an integer";

      }else {
        cout << "Special symbol";
      }
      
 

   return 0;
}
