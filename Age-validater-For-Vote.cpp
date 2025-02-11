#include <iostream>
using namespace std;

int main()
{

  int age;

  cout << "Enter Your Age :\t ";

  cin >> age;

  if (age >= 18)
  {
    cout << "You are Eligible to Vote";
  }

  else
  {
    cout << "You are not Eligible to vote";
  }
  return 0;
}
