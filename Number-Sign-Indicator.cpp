#include <iostream>
using namespace std;

int main (){

int num;

cout << "Enter Number:\t";
cin >> num;

if (num == 0)
{
    cout<<"Number is Zero" << endl;

}else if (num < 0 )
{
    cout<<"Number is Negative\n" << endl;

}else if (num > 0)
{
    cout<< "Number is Positive\n"<< endl;

}

return 0;


}
