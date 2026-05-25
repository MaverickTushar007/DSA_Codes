#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    bool isPrime = true;

    if (n<=0){
        isPrime = false;
    }
    else{
        for (int i = 2; i*i <= n; i++){
            if (n%i == 0) isPrime = false;
        }
    }

    if(isPrime){
        cout<<"the given number is a prime number";
    }
    else cout<<" not a prime no";
}

