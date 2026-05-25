#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();

    //prev greatest element array
    int prev[n];
    prev[0] = -1;
    int max1 = height[0];
    for(int i = 1; i<= n-1; i++){
        prev[i] = max1;
        if(max1 < height[i]) max1 = height[i];
    }

    // Next greatest element array
    int next[n];
    next[n-1] = -1;
    int max2 = height[n-1];
    for (int i = n-2; i >=0; i--)
    {
        next[i] = max2;
        if (max2 < height[i]){
            max2 = height[i];
        }
    }

    //min array between prev and next arrays...
    // int mini[n];
    // for(int i = 0; i<=n-1;i++){
    //     mini[i] = min(prev[i],next[i]);
    // }

    
    //using previous array as the new minimum:
    for (int i = 0; i <= n - 1; i++)
    {
        prev[i] = min(prev[i],next[i]);
    }

        // calculating water
        int water = 0;
        for (int i = 1; i <= n - 2; i++)
        {
            if (height[i] < prev[i])
            {
                water += (prev[i] - height[i]);
            }
        }
        return water;
    }

int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);

    for (int i = 0; i <= v.size() - 1; i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
    int result = trap(v);
    cout << result;
}
