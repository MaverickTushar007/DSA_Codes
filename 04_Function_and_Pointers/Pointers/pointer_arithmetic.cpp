#include <iostream>
using namespace std;

int main()
{
    // int x = 15;
    // int* ptr = &x;
    // cout<<ptr<<endl;
    // ptr = ptr+1;
    // cout<<ptr;

    // int x = 15;
    // int *ptr = &x;
    // cout << *ptr << endl;  //15
    // ptr = ptr + 1;
    // cout << *ptr; // 1834562224%: this is probably a garbage value.

    int x = 15;
    int *ptr = &x;
    cout << *ptr << endl; // 15
    (*ptr)++;       //make sure u write in this format! 
    cout << *ptr; 
}