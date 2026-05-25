#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // n = 4

    int size = 2 * n - 1;
    int nst = 1;
    int nsp = 2 * n - 3;

    for (int i = 1; i <= size; i++)
    {
        // left stars
        for (int j = 1; j <= nst; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 1; j <= nsp; j++)
        {
            cout << "_";
        }

        // right stars
        int rightStars = (nsp <= 0) ? nst - 1 : nst;
        
        for (int j = 1; j <= rightStars; j++)
        {
            cout << "*";
        }

        cout << endl;

        // update counts
        if (i < n)
        {
            nst++;
            nsp -= 2;
        }
        else
        {
            nst--;
            nsp += 2;
        }
    }
    return 0;
}
