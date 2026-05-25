#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> generate(int numRows)
{
    int m = numRows;

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
    return v;
}

int main()
{
    int m = 6;
    vector<vector<int>> v = generate(m);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}