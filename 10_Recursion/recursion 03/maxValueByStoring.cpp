
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int maxInArray(int arr[], int n, int idx)
{
    if (idx == n) return INT_MIN;
    return max(arr[idx], maxInArray(arr,n,idx+1));
}
int main()
{
    int arr[] = {1, 4, 2, 4, 6, 7, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<maxInArray(arr, n, 0);
}
