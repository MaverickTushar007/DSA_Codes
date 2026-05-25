#include <iostream>
using namespace std;

int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}

int combination(int n, int r){
    int ncr = fact(n) / (fact(r) * fact(n-r));
    return ncr;
}

int main()
{
    int n, r;
    cout << "enter the n:";
    cin >> n;
    cout << "enter the r:";
    cin >> r;
    int ncr = combination(n,r);
    cout << ncr;
}
