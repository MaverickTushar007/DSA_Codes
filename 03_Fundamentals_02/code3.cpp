#include <iostream>
using namespace std;
// WAP to count digits of a given number
int main()
{
    int a = 0, n;
    cin >> n;

    while(n > 0){
        n /= 10;
        a += 1;
    }
    cout<<a;

}
