#include <iostream>
#include <vector>
using namespace std;
void print(int i,int n)
{   //base case
    if (i>n) return;
    cout<<i<<endl;
    print(i+1,n);
}

int main()
{
    print(1,6);
}