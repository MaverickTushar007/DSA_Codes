#include <iostream>
using namespace std;

// Pass by value!!
void swap(int &a, int &b)   //simpy passing by referrence
{
    int temp = a;
    a = b;
    b = temp;
    return;
    // this code posses the problem
}
int main()
{
    int a=8, b=6;
    // cin >> a >> b;
    swap(a, b);
    cout << a << ' ' << b;
}