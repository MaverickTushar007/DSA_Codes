#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[5] = {5, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // for (int ele : arr){
    //     cout << ele << " ";
    // }

    // insertion sort
    for (int i = 1; i <= n - 1; i++)
    {
        int j = i;
        while(j>=1){
            if( arr[j] >=arr[j-1]) break;
            else{
                swap(arr[j], arr[j-1]);
                j--;
            }
        }
    }
    for (int i = 0; i<=n-1;i++){
        cout<<arr[i]<<' ';
    }
}
