#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 10, 11, 14};
    int n = 9;

    // O(n)

    // for (int i = 0; i < n; i++)
    // {
    //     if (i != arr[i])
    //     {
    //         cout << i;
    //         break;
    //     }
    // }

    //O(nlogn)
    int ans = -1;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(arr[mid] == mid) lo = mid+1;
        else{
            ans = mid;
            hi = mid -1;
        }
    }
    cout<<ans;
}
