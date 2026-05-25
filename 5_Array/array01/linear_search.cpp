#include <iostream>
using namespace std;

// Find the element x in the array . Take array and
//x as input.

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    bool flag = false;  //using check mark!!!
    cin >> x;
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            flag = true;
        } 
    } 
    if (flag) cout<<"Element is present";
    else cout<< "NOT present";
}