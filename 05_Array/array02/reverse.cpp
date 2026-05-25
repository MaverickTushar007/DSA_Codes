#include <iostream>
#include <vector>
using namespace std;

// Write a program to copy the contents of one
//array into another in the reverse order.
int main(){
    vector<int> v;
    vector<int> c(v.size());
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);
    v.push_back(6);

    // reverse copy
    for (int i = v.size() - 1; i >= 0; i--)
    {
        c.push_back(v[i]);
    }

    // print reversed vector
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << ' ';
    }
}