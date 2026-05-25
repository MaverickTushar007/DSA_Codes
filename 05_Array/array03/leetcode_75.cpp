#include <iostream>
#include <vector>
using namespace std;

void sort_Zeros_Ones(vector<int> &v)
{
    int n = v.size();
    int noZ = 0;
    int noO = 0;
    int noT = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0){
            noZ++;
        }
        else if (v[i] == 1)
        {
            noO++;
        }
        else noT++;
    }

    cout<<"zeros: "<<noZ<<" Ones: "<<noO<<" Twos: "<<noT<<endl;

    for (int i = 0; i < n; i++)
    {
        if (i < noZ)
            v[i] = 0;
        else if((noZ<=i) && (i<noO+noZ))
            v[i] = 1;
        else v[i] = 2;
    }
}

void One_pass_solution(vector<int>&nums){
    int lo = 0;
    int mid = 0;
    int hi = nums.size() - 1;

    while (mid <= hi)
    {
        if(nums[mid] == 2){
            swap(nums[hi], nums[mid]);
            hi--;
        }
        else if (nums[mid] == 0)
        {
            swap(nums[lo], nums[mid]);
            lo++;
            mid++;
        }
        else
            mid++;
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
    // sort_Zeros_Ones(v);
    One_pass_solution(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
}
