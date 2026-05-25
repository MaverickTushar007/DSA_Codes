#include <iostream>
using namespace std;

int main()
{
    int a,b;
    // int temp;
    cin>>a>>b;
    // temp = a;
    // a = b;
    // b = temp;

    
    a = a+b;
    b = a - b;
    a = a - b;
    
    cout<<a<<' '<<b;

}