#include <iostream>
using namespace std;

int main()
{
    // int x = 6;
    // int y = 7;

    // int* p1 = &x;
    // int *p2 = &y;

    // cout<<*p1+ *p2;

    
    //Taking input using pointers..
    int x,y;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"Enter first no";
    cin>>*p1;
    cout << "Enter second no";
    cin >> *p2;
    cout << *p1 + *p2;
}