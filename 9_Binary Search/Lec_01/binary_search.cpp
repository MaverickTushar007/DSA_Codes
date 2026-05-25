#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 2, 5, 7, 9, 12};
    int n = 6;
    int target = 9;

    int lo = 0, hi = n - 1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2; // safer than (lo+hi)/2

        if (nums[mid] == target)
        {
            cout << mid;
            return 0; // exit once found
        }
        else if (nums[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }

    cout << -1; // if not found
    return 0;
}
