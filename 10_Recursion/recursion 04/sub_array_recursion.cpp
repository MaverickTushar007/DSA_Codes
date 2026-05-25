#include <iostream>
using namespace std;

void subArray(vector<int> v, int arr[], int n, int idx) //ever recursion created a new vector v. so dont use & operator.
{
    if(idx == n){
        for(int i = 0; i<v.size(); i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }

    //no addition of elements
    subArray(v,arr,n,idx+1);
    if(v.size()==0 || arr[idx-1] == v[v.size()-1]){ //adding the part where the size of v was 0 or when the elements was in the contiuation.
        v.push_back(arr[idx]);
        subArray(v,arr,n,idx+1);
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;
    vector<int> v;
    subArray(v,arr,n,0);
}
