
#include <iostream>
#include <vector>
using namespace std;

// void display(int arr[], int n, int idx){
//     if (idx == n) return;
//     cout<<arr[idx]<< " ";
//     display(arr,n,idx+1);
// }
void display2(vector<int> & v, int idx)
{
    if (idx == v.size())
        return;
    cout << v[idx] << " ";
    display2(v,idx + 1);
}
int main()
{   int arr[] = {1,4,2,4,6,7,3,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // display(arr, n, 0);

    vector<int> v;
    for(int i = 0;i < n;i++){
        v.push_back(arr[i]);
    }
    display2(v,0);
}
