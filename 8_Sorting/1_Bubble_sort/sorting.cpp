#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[6] = { 5,4,6,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    
    //method 1
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    for (int i = 0;i<n-1;i++){
        //traverse
        for (int j = 0; j<n-1; j++){
            //swap 
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout << endl;

    
    //method 2
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    for (int i = 0; i < n - 1; i++)
    {
        // traverse
        for (int j = 0; j < n - 1 - i; j++)
        {
            // swap
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}
