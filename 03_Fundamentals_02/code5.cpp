

#include <iostream>
using namespace std;
// WAP to print sum of digits of a given number.
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    if (n%2 == 0){
        for (int i = 1; i<=n; i++){
            if (i%2 != 0) sum +=i;
            else sum -=i;
        }
        cout<<sum;}
    else{
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
                sum += i;
            else
                sum -= i;
        }
    cout << sum;
    }
}
