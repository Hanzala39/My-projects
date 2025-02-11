#include <iostream>
using namespace std;

int main() {
   int num, i = 1;
   long long factorial = 1;

   
   cout << "Enter a positive integer: ";
   cin >> num;

   
   if (num < 0) {
      cout << "Error! Factorial of a negative number doesn't exist.";
      return 1;
   }

   while (i <= num) {
      factorial *= i;
      i++;
   }

   
   cout << "Factorial of " << num << " = " << factorial << endl;

   return 0;
}
