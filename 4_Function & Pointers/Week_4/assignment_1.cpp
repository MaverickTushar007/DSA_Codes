#include <iostream>
using namespace std;

void squares(int a){
    for (int i = 1; i<=a; i++){
        cout<<i*i<<endl;
    }
}
float area(float x){
    float ar = 3.14*x*x;
    return ar;

}

void odd( int a, int b ){
    for (int i = min(a,b); i<=max(a,b);i++){
        if (i%2 != 0){
            cout<<i<<endl;
        }
    }
}
int main()
{
    int a,b,n;
    float r;
    cin>>r;

    // squares(n);
    //cout<<area(r);
    odd(12,66);

}