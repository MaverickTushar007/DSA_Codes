#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {5,0,1,2,0,0,4,0,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool flag = true;
    for (int i = 0; i < n - 1; i++) // n-1 passes!
    {
        // traverse
        for (int j = 0; j < n - 1 - i; j++)
        { 
            if (arr[j] == 0)        //only change in the condition
            { // swap
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
        { // swap didnt happened
            break;
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}
