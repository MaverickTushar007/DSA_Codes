#include <iostream>
#include <vector>
using namespace std;
int fibo(int n)
{
    // base case
    if (n == 1 || n == 2)
        return 1;

    // recursive call
    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}

int main()
{
    cout << fibo(10) << endl;
}