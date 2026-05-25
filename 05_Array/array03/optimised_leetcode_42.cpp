#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();

    // prev greatest element array
    int prev[n];
    prev[0] = -1;
    int max1 = height[0];
    for (int i = 1; i <= n - 1; i++)
    {
        prev[i] = max1;
        if (max1 < height[i])
            max1 = height[i];
    }

    // Next greatest element array ---> using prev array!
    prev[n - 1] = -1;
    int max2 = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if(max2<prev[i]) prev[i] = max2;
        if(max2<height[i]) max2= height[i];
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

int main()
{
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
