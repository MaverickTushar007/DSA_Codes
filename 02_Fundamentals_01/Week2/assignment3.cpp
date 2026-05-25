#include<iostream>
using namespace std;

int main(){
    // for (int i = 1; i<+100; i++){
    //     if (i%3 == 0) cout<< i<<endl;
    // }
    int a = 3,n;
    cin>>n;
    for (int i = 1; i<=n; i++){
        cout<<a<<endl;
        a*=4;
    }
}