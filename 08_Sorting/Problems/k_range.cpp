#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {5, 3,10};
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    double kmin = INT_MIN;
    double kmax = INT_MAX;
    bool flag = true;

    for (int i = 0; i < n - 1; i++)
    {
        double mid = (arr[i] + arr[i + 1]) / 2.0;

        if (arr[i] >= arr[i + 1])
        {
            kmin = max(kmin, mid);
        }
        else
        {
            kmax = min(kmax, mid);
        }

        if (kmin > kmax)
        {
            flag = false;
            break;
        }
    }

    if (!flag)
        cout << -1;
    else if (kmin == kmax)
    {
        if (kmin - (int)kmin == 0)
        {
            cout << kmin;
        }
        else
        {
            cout << -1;
        }
    }
    else
    {
        if (kmin - (int)kmin > 0)
        {
            kmin = (int)kmin + 1;
        }
        cout << (kmin) << " " << int(kmax);
    }
}
