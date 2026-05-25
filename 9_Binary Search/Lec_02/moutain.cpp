#include <iostream>
#include <vector>
using namespace std;


    int peakIndexInMountainArray(vector<int> & arr)
    {
        int lo = 0;
        int n = arr.size();
        int hi = n - 1;
        int mid;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
                break;
            else if (arr[mid] > arr[mid + 1])
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        return mid;
    }

int main()
{ //[24,69,100,99,79,78,67,36,26,19]
    vector<int>v;
    v.push_back(24);
    v.push_back(69);
    v.push_back(100);// ans
    v.push_back(99);
    v.push_back(79);
    v.push_back(78);
    v.push_back(67);
    v.push_back(36);
    v.push_back(26);
    v.push_back(19);

    int ans = peakIndexInMountainArray(v);
    cout<<ans;
}