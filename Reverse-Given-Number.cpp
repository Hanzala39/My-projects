#include <iostream>
using namespace std;

int main() {
   int num, reverse = 0, remainder;

   
   cout << "Enter a number: ";
   cin >> num;

   
   int originalNum = num;

   
   while (num != 0) {
      remainder = num % 10;
      reverse = reverse * 10 + remainder;
      num /= 10;
   }

  
   cout << "Reverse of " << originalNum << " is: " << reverse << endl;

   return 0;
}
