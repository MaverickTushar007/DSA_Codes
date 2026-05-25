#include <iostream>
using namespace std;

// Pass by value!!
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
    // this code posses the problem
}
int main()
{
    int a, b;
    cin >> a >> b;
    swap(&a, &b);
    cout << a << ' ' << b;
}