#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {19,12,23,8,16};
    vector<int> v(5,0); //0 means not visited
    int n  = v.size();
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 0; i<n;i++){
        int min = INT_MAX;
        int mindx = -1;
        for (int j = 0; j < n; j++){
            if(v[j] == 1) continue;
            else{
                if(min>arr[j]){
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        v[mindx] = 1;
        x++;
    }
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

