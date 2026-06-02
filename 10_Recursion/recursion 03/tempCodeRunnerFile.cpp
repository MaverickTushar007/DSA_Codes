#include <iostream>
#include <string>
using namespace std;

void printSubset(string s, int idx, string ans)
{
    if (idx == s.length())
    {
        cout << ans << endl;
        return;
    }

    // ❌ exclude current character
    printSubset(s, idx + 1, ans);

    // ✅ include current character
    printSubset(s, idx + 1, ans + s[idx]);
}

int main()
{
    string s = "abc";
    printSubset(s, 0, "");
}
