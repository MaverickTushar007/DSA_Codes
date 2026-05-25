#include<iostream>
using namespace std;
int partition(int arr[], int si, int ei)
{
    int mid = (si + ei) / 2;
    int pivotElement = arr[mid];
    swap(arr[si], arr[mid]);

    int count = 0;
    for (int i = si + 1; i <= ei; i++)
        if (arr[i] <= pivotElement)
            count++;

    int pivotIdx = si + count;
    swap(arr[si], arr[pivotIdx]);

    int i = si, j = ei;
    while (i < pivotIdx && j > pivotIdx)
    {
        if (arr[i] <= pivotElement)
            i++;
        else if (arr[j] > pivotElement)
            j--;
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

void quicksort(int arr[], int si, int ei){
    if(si>=ei) return;
    int pi = partition(arr, si,ei);

    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int str_idx = 0, end_idx = n-1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout<<endl;
    quicksort(arr, str_idx, end_idx);
    for(int i = str_idx;i<=end_idx;i++){
        cout<<arr[i]<<' ';
    }
}
