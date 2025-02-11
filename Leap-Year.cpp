#include <iostream>
using namespace std;

int main() {
    int year;

    // Input year
    cout << "Enter a year: ";
    cin >> year;

    // Check if year is leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year.";
    } else {
        cout << year << " is not a leap year.";
    }

    return 0;
}                          
