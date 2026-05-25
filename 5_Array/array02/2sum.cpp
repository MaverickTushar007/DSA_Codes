#include <iostream>
using namespace std;
int main()
{   
    int x;
    cin>>x;

    vector<int> v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);
    v.push_back(6);
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);
    v.push_back(6);
    v.push_back(7);
    v.push_back(2);
    v.push_back(6);

    for (int i = 0; i < v.size()-1; i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            if(v[i]+v[j] == x) cout<<'('<<i<<','<<j<<')'<<endl;
        }
    }
    cout << endl;


}