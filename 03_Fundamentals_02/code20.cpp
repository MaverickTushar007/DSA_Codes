#include <iostream>
using namespace std;

int main()
{
    int a = 1, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << '_';
        }

        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}