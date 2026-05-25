

#include <iostream>
using namespace std;
int main()
{
    //double pointers are used to store the address of the pointers created

    int x = 5 ;
    int* ptr = &x;
    int** p = &ptr;
    cout <<**p<<endl;   //5
    cout << *p << endl; //address of x
    cout<<ptr<<' '<<p<<' '<<&ptr;
}
