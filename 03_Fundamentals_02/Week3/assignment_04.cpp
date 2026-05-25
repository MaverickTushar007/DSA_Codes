#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n; // n = 4

    int size = 2 * n - 1;

    for (int i = 1; i <= size; i++)
    {
        int gap = abs(n - i);

        for (int j = 1; j <= size; j++)
        {
            if (i == 1 || i == size)
            {
                cout << "*";
            }
            else if (j <= gap + 1 || j > size - (gap + 1))

            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
