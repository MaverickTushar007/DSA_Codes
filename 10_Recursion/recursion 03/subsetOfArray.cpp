
#include <iostream>
#include <vector>
using namespace std;

void subsets(vector<int> ans, int v[], int idx, int n)
{
    if (idx == n)
    {
        for (int x : ans)
        {
            cout << x;
        }
        cout << endl;
        return;
    }         
    subsets(ans, v, idx + 1, n);
    ans.push_back(v[idx]);
    subsets(ans, v, idx + 1, n);
}

int main()
{
    int v[] = {1, 2, 3};
    int n = 3;
    vector<int> ans;


    subsets(ans, v, 0, n);
}
