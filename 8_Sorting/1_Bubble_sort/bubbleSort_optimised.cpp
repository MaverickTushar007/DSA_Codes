#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[6] = {5, 4, 6, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);


    // method 2
    bool flag = true;
    for (int i = 0; i < n - 1; i++) //n-1 passes!
    {
        // traverse
        for (int j = 0; j < n - 1 - i; j++)
        {
            // swap
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if(flag == true) {  //swap didnt happened
            break;
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}
