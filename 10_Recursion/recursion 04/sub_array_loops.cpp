
#include <iostream>
#include <vector>
using namespace std;



int main()
{
    int arr[4] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i<n; i++){
        for(int k = i; k<n;k++){ //k only denotes the number of round of j
            for(int j = i; j<=k;j++){
                cout<<arr[j];
            }
            cout<<endl;
        }
    }
}
