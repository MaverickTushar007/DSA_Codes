
#include <iostream>
#include <string>
using namespace std;
void generate_binary(string s, int n)
{
    if(s.length() == n){
        cout<<s<<endl;
        return;
    }
    // generate_binary(s + '0', n);  //rather than using else we can also use this!
    if (s == "" || s[s.length()-1] == '0')
    {
        generate_binary(s + '0', n);
        generate_binary(s + '1', n);
    }
    else
        generate_binary(s + '0', n);
}
int main()
{
    int n = 4;
    generate_binary("", n);
}
