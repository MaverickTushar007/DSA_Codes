
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string str = "tusharmarscitizen";
    // cout<<str.size()<<endl;
    // cout << str.length();   //index---> 0 to size()-1 

    string s = "abcdef";
    string t = " tushar";
    // s.push_back('T');
    // s.push_back('M');
    // cout<<s<<endl;
    // s.pop_back();
    // cout << s << endl;


    cout << s << endl;
    s = s+t;
    cout << s << endl;
    s = t+ s;
    cout << s << endl;

    string f = "abcdef";
    reverse(f.begin()+2, f.begin() + 5);
    cout<<f<<endl;

    // reversing the first half of the string
    string str = "TusharBhatt";
    int n = str.length();
    cout<<str.substr(n/2+1)<<endl;
    reverse(str.begin()+0, str.end()+ n/2+1);
    cout << str << endl;
    }
