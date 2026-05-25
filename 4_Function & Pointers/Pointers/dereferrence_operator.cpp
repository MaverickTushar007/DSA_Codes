#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int* p = &x;
    cout << p << endl;
    x = 90;     //this doesnt changes the address created
    cout << p << endl;
    *p = 48;    //this updates the value of the x.
    cout << *p << endl;
}