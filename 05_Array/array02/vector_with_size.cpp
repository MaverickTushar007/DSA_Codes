#include <iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int>v(5);
    cout << v[0]<<' ';
    cout << v[1]<<' ';
    cout << v[2]<<' ';

    cout<<v.size()<<' '<<v.capacity()<<endl;

    vector<int> arr(5,6);
    cout << arr[0] << ' ';
    cout << arr[1] << ' ';
    cout << arr[2] << ' ';

    cout << arr.size() << ' ' << arr.capacity();
}