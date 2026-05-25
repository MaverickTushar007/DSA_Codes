
#include <iostream>
#include <vector>
using namespace std;

void subsets(vector<int> ans, int v[], int idx, int n, int k)
{
    if (idx == n)
    {
        if (ans.size() == k)
        {    
            for(int i = 0; i<ans.size();i++){
                cout<<ans[i]<<' ';
            }
            cout<<endl;
        }
        return;
    }

    if(ans.size() + (n-idx) < k) return; //this makes the code run faster.
    subsets(ans, v, idx + 1, n,k);
    ans.push_back(v[idx]);
    subsets(ans, v, idx + 1, n,k);
}

int main()
{
    int v[] = {1, 2, 3,4,5};
    int n = 5;
    int k = 3;
    vector<int> ans;

    subsets(ans, v, 0, n,k);
}
