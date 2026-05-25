#include <iostream>
using namespace std;

// Find the element x in the array . Take array and
// x as input.
void display(int a[]){      //here 'a' acts as the pointer...//cause arrays are always passed by reference
    for (int i = 0; i<=5;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
}
void change(int b[])
{
    b[0] = 100;
}
int main()
{
    int arr[] = {1,3,4,6,42,79};
    display(arr);
    change(arr);
    display(arr);
}