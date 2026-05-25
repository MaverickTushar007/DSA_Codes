#include <bits/stdc++.h>
using namespace std;

int main(){
    // int t = 10;
    // while (t /= 2)
    // {
    //     cout << "Hello" << endl;
    // }

    // for (int x = 1; x * x <= 10; x++)
    //     cout << "In for loop" << endl;

    // int x = 10, y = 0;
    // while (x >= y)
    // {
    //     x--;
    //     y++;
    //     cout << x << " " << y << endl;
    // }


    //sum of even digits of a number
    // int r,n,sum = 0;
    // cin>>n;
    // while (n>0)
    // {
    //     r = n%10;
    //     n /= 10;
    //     if (r%2 == 0){
    //         sum = sum +r;
    //     }
    // }
    // cout<<sum;

    // Write a program to print out all Armstrong numbers between 1 and 500.
    for (int i = 1; i <= 500; i++)
    {
        int num = i;
        int r, r_cube = 0;

        while (num > 0)
        {
            r = num % 10;
            r_cube += r * r * r;
            num /= 10;
        }

        if (r_cube == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}