
#include <iostream>
#include <vector>
using namespace std;

void display(int arr[], int n, int idx){
    if (idx == n) return;
    cout<<arr[idx]<< " ";
    display(arr,n,idx+1);
}
void printMax(int arr[], int n, int idx, int max)
{   if (idx==n) {
        cout<<max;
        return;
}
    if (max<arr[idx]) max = arr[idx];
    printMax(arr,n,idx+1,max);
}
int main()
{
    int arr[] = {1, 4, 2, 4, 6, 7, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printMax(arr,n,0,INT_MIN);



}
