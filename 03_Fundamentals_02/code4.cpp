

#include <iostream>
using namespace std;
    // WAP to print sum of digits of a given number.
    int main()
    {
        int a = 0, r, n;
        cin >> n;

        while (n > 0)
        {
            r = n%10;
            n /= 10;
            a = a*10 + r;
        }
        cout << a;
    }
