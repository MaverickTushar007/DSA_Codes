#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v; //you dont need to mention the size;

    //inserting / input: do not use []
    v.push_back(6);

    cout<<v.size()<<' ';
    cout << v.capacity() << endl;
    v.push_back(3);
    cout << v.size() << ' ';
    cout << v.capacity() << endl;
    // v[1] = 1 this is something u should avoid.
    //using this will get u garbage values
    v.push_back(9);
    cout << v.size() << ' ';
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.size() << ' ';
    cout << v.capacity() << endl;

    v.push_back(16);
    cout << v.size() << ' ';
    cout << v.capacity() << endl;
    v.push_back(9);
    cout << v.size() << ' ';
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.size() << ' ';
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.size() << ' ';
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.size() << ' ';
    cout << v.capacity() << endl;

    // if you want to update / access
    cout << v[0] << ' ';
    cout << v[1] << ' ';
    cout << v[2] << ' ';
    cout << v[3] << ' ';
}