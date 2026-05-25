#include <iostream>
#include <vector>
using namespace std;
vector<int> getRow(int rowIndex)
{
    int m = rowIndex+1;

    vector<vector<int>> v;
    for (int i = 1; i <= m; i++)
    {
        vector<int> a(i);
        v.push_back(a);
    }
    // generate
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                v[i][j] = 1;
            else
                v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
        }
    }

    vector<int> res(m); //this is an inportant thing that u have to give size to the 
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            res[j] = v[m-1][j];
        }
        cout << endl;
    }

    return res;
}

int main()
{
    int m = 4;
    vector<int> v = getRow(m);

    for (int i = 0; i < v.size(); i++)
    {
            cout << v[i] << ' ';
        }
        cout << endl;
}