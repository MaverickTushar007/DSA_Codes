#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,2,5,7,8};
    int* ptr = arr;
    for (int i = 0;i<=4;i++){
        cout<<ptr[i]<<endl;
        // cout<<*ptr<<' ';
        // ptr++;   ptr = ptr +1     int 1 increases the address by 1 byte each time 
        ptr = arr;

        // ptr = arr; // ptr is pointing to lst element
        // *ptr = 8;  // ptr[0] = 8
        // ptr++;     // ptr is pointing to 2nd element
        // *ptr = 9;
        // ptr - ; // ptr is pointing to 1st element cout<<end l;
        // for (int i = 0; i <= 4; i++)
        // {
        //     cout << *ptr << " ";
        //     ptr++;
        // }
        // ptr = arr; // pt is pointing to 1st element
    }
}