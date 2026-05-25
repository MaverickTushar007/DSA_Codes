#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int nsp = n - 1;
    int nst = 1;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        // print spaces
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }

        // print stars
        for (int k = 1; k <= nst; k++)
        {
            cout << "*";
        }

        cout << endl;

        // update spaces and stars
        if (i < n)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
    }

    return 0;
}
