#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);
    v.push_back(6);
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);
    v.push_back(6);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;

    int x, int_index = -1;
    cin>>x;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x) int_index = i;
    }
    cout<<int_index;
}