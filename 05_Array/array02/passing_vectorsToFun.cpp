#include <iostream>
#include <vector>
using namespace std;
// void change(vector<int> a){ //vectors are passed by value each time u pass a new vector is created... 
void change(vector<int> &a){   //using the "&" we can actually pass a vector by it reference.
    a[0] = 100;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i]<<' ';
    }
    cout << endl;
}
int main()
{
    vector<int>v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);
    v.push_back(6);

    for (int i = 0;i< v.size();i++){
        cout<<v[i]<<' ';
    }
    cout<<endl;

    change(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<' ';
    }
}