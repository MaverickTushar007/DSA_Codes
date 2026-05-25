#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // you dont need to mention the size;

    // inserting / input: do not use []
    v.push_back(6);
    v.push_back(3);
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(3);
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(3);
    v.push_back(9);
    v.push_back(10);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout<<endl;
    v.pop_back();
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<' ';
    }

} 