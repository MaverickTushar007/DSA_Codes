#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x = 100;
    int lo = 0;
    int hi = x;

    while
    (lo<=hi){
        int mid = lo + (hi-lo)/2;
        long long m = (long long)mid;
        long long y = (long long)x;

        if(m*m > y) hi = mid-1;
        else lo = mid+1;
    }
    cout<<hi;
}