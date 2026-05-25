#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    //formation of prefix SUM
    for(int i = 1; i<n; i++){
        arr[i] += arr[i-1];
    }
    bool flag = false;
    //check if any x exist:
    for (int i = 1; i<n; i++){
        if(2*arr[i] == arr[n-1]) {
            flag = true;
            break;
        }
    }
    if (flag) cout<<"Yes partition can happen";
    else cout << " Partition cant be happened";
} 