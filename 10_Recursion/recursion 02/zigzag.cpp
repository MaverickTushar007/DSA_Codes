#include <iostream>
#include <vector>
using namespace std;
void pip(int n)
{
    if (n == 0)
        return;
    cout << n;
    pip(n - 1);
    cout << n;
    pip(n - 1);
    cout << n;
}

int main()
{
    cout << endl;
    pip(1);
    cout << endl;
    cout << endl;
    pip(2);
    cout << endl;
    cout << endl;
    pip(3);
    cout << endl;
    cout << endl;
    pip(4);
    cout << endl;
}