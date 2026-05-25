#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {   
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << ' ';
        }

        // left part
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // right part
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}