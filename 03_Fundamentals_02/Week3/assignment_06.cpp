#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int rows = 2 * n + 1;
    int center = n + 1;

    for (int i = 1; i <= rows; i++)
    {
        int dist = abs(center - i);
        int nsp = dist;
        int nst = 2 * (n - dist) + 1;

        // leading spaces
        for (int s = 1; s <= nsp; s++)
        {
            cout << " ";
        }

        // stars & spaces inside diamond
        for (int j = 1; j <= nst; j++)
        {
            if (i == center ||      // full middle row
                j == 1 ||           // left edge
                j == nst ||         // right edge
                j == (nst + 1) / 2) // vertical center line
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
