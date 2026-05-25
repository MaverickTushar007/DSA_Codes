#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    //at
    vector<int>v;
    v.push_back(8);
    v.push_back(1);
    v.push_back(7);
    v.push_back(5);
    // cout<<v.at(2)<<endl;
    v.at(2) = 34;
    // cout << v.at(2);

    for (int i = 0; i<v.size();i++){
        cout<< v.at(i)<< ' ';
    }
    cout<<endl;

    //sorting the array.

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << ' ';
    }
}