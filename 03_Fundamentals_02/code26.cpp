#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n - 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << i;
    }
    cout << endl;

    for (int j = 1; j <= m; j++)
    {  
        int a = 1;
        for (int k = 1; k <= m - j + 1; k++)
        {
            cout << a;
            a++;
        }
        for (int s = 1; s <= 2 * j - 1; s++)
        {
            cout << ' ';
            a++;
        }
        for (int k = 1; k <= m - j + 1; k++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
}
