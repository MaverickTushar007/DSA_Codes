#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char str[] = {'T', 'u','s','h','a','r'};
    for (int i =0;i<=5;i++){
        cout<<str[i];
    }
    cout<<endl;

    char str1[] = {'T', 'u', '\0', 'h', 'a', 'r'};
    for (int i = 0; str1[i] != '\0'; i++)
    {
        cout << str1[i];
    }
    cout << endl;
}
