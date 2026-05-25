#include <iostream>
using namespace std;

// Find the element x in the array . Take array and
// x as input.

int main()
{
    int arr[] = {353251, 3456, 35325, 6463, 6643, 6737};
    // int max = arr[0];
    int max = INT_MIN;
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)  // for INT_MIN we start from i = 0;
    {
        if(max < arr[i]) max = arr[i];
    }
    cout<<max;
}