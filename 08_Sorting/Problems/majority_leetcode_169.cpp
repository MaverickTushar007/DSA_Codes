#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {2, 2, 1, 1, 1, 2, 2,2,3,5,6,7,3,6,9,9,2,2,2,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    // for (int ele : arr){
    //     cout << ele << " ";
    // }
    int half = n/2;
    int count = 0;

    // insertion sort
    for (int i = 1; i <= n - 1; i++)
    {
        int j = i;
        while (j >= 1)
        {
            if (arr[j] >= arr[j - 1])
                break;
            else
            {
                swap(arr[j], arr[j - 1]);
                j--;
            }
        }
    }
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << ' ';
    }
}
