#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    cout<<&x<<endl; // address which is been allocated in the real time.
    // char ch = ' ';
    // cout<<sizeof(x)<<endl;
    // cout << sizeof(ch);

    int* p = &x;
    cout<<p<<endl;

    float y = 5.3;
    float* q = &y;
    cout << q << endl;
}