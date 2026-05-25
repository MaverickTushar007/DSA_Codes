#include <iostream>
#include <vector>
using namespace std;

void Two_pointer(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (v[j] >0)
            j--;
        else if (v[i] < 0)
            i++;
        if (i > j)
            break;
        if (v[i] > 0 && v[j] < 0)
        {   int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);

    //printing the original array
    for (int i = 0; i < v.size() ; i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;


    Two_pointer(v);
    for (int i = 0; i <= v.size() - 1; i++)
    {
        cout << v[i] << ' ';
    }
}
