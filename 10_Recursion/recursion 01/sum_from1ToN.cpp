#include <iostream>
#include <vector>
using namespace std;
void sum1toN(int sum, int n)
{ // base case
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum1toN(sum+n, n-1);
}

int sum2( int n)
{ // base case
    if (n == 0) return 0;
    return n+ sum2(n-1);
}
int main()
{
    sum1toN(0, 10);
    cout<<endl;
    cout<<sum2(11);
}