#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void subsets(string s, int idx, string ans, vector<string> &res)
{
    if (idx == s.size())
    {
        res.push_back(ans);
        return;
    }

    // include current character
    subsets(s, idx + 1, ans + s[idx], res);

    // skip all same characters
    while (idx + 1 < s.size() && s[idx] == s[idx + 1])
        idx++;

    // exclude current character
    subsets(s, idx + 1, ans, res);
}

int main()
{
    string s = "aaabbc";
    sort(s.begin(), s.end()); // important

    vector<string> res;
    subsets(s, 0, "", res);

    for (string x : res)
    {
        cout << "\"" << x << "\"\n";
    }
}
