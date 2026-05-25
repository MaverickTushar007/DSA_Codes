#include<iostream>
using namespace std;
int main(){
    int fact = 1;
    int n;
    cin>> n;

    for (int i =n ; i>=1;i--){
        fact = fact * i;
    }
    cout<<fact;
}
