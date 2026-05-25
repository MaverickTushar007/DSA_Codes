#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //when the size is given...
    //similar loop method like used in array
    // vector<int> v(5);
    // for(int i=0; i<v.size();i++){
    //     cin>>v[i];
    // }
    // cout<<endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i]<<' ';
    // }


    
    //when the size is not given...
    vector<int> arr;
    for (int i = 0; i < 5; i++)
    {   int x;
        cin>>x;
        arr.push_back(x);
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ' ';
    }
}