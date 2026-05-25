#include<iostream>
using namespace std;

int main(){
    int arr [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int brr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    //taking input from the user.

    int m,n;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout << "Enter the number of cols: ";
    cin>>n;

    for (int i = 0;i<=m-1;i++){
        for (int j = 0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<< endl;
    //traversal through the array
    for (int i = 0;i<=m-1;i++){
        for (int j = 0;j<=n-1;j++){
            cout<< arr[i][j]<<' ';
    
        }
    cout<<endl;
    }

}