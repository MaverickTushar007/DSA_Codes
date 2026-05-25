
#include <iostream>
#include <string>
using namespace std;

void removeChar(string ans, string original){
    char ch = original[0];
    if( original.length()== 0){
        cout<< ans;
        return;
    }
    if (ch=='a') removeChar(ans, original.substr(1));
    else removeChar(ans + ch, original.substr(1));
}

//using the concept of index;
void removeChar2(string ans, string original, int idx)
{
    char ch = original[idx];
    if (idx == original.length())
    {
        cout << ans;
        return;
    }
    if (ch == 'a')
        removeChar2(ans, original,idx+1);
    else
        removeChar2(ans + ch, original,idx+1);
}

int main()
{
    string str = "raghav garg";
    removeChar2("", str,0);
}
