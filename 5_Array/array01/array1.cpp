#include <iostream>
using namespace std;

int main()
{   
    // int n =3;
    // // cin>>n;
    // int marks[n];
    // for (int i = 0; i<n;i++){
    //     cin >> marks[i];
    // }
    // for (int j = 0; j<n;j++){
    //     if(marks[j]<35) cout<<j<<' ';
    // }
    // int size = sizeof(marks)/sizeof(marks[0]);
    // cout<<size<<endl;
    
    
    // //memory allocation....
    // cout << &marks; //address of arr == arr[0]
    // for (int j = 0; j < n; j++)
    // {
    //     cout << &marks[j]<<endl;
    // }

    // Calculate the sum of all the elements in the
    //given array.

    int n,sum = 0;
    cin>>n;

    int arr[n];
    for (int i = 0; i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout<<sum;
}