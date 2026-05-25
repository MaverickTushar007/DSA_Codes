#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    int arr[] = {0,1,2,3,4,6,7,8,9};
    int n = 8;
    int lo = 0;
    int ans;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo+ (hi-lo)/2;
        if(arr[mid] == mid) lo = mid + 1;
        else{
            ans = mid;
            hi = mid -1;
        }
    }
    cout<<ans;
}
