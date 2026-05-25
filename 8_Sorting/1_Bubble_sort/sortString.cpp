#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "AZYZXBDXJK";
    string str;
    for (int i = 0; i <s.size();i++){
        if (s[i]>=int('X')){
            str.push_back(s[i]);
        } 
    }
    cout<<str<<endl;

    bool flag = true;   
    int n = str.size();
    for (int i = 0; i < n - 1; i++) // n-1 passes!
    {
        // traverse
        for (int j = 0; j < n - 1 - i; j++)
        {
            // swap
            if (str[j] > str[j + 1])
            {
                swap(str[j], str[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
        { // swap didnt happened
            break;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << str[n - i]  ;
    }
}
