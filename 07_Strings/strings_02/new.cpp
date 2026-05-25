
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

// int minimumSum(int num)
// {
//     vector<int> v;
//     while (num > 0)
//     {
//         v.push_back(num % 10); // extract digit
//         num /= 10;
//     }
//     sort(v.begin(),v.end());
//     for (int i = 0; i<v.size(); i++){
//         cout<<v[i]<<" "<<endl;
//     }
//     int num1 = v[0]*10 + v[2];
//     int num2 = v[1] * 10 + v[3];
//     int sum = num1 + num2;
//     return sum;
// }
int main()
{
    int n =20;
    // cin>>n; 

    // int x =  minimumSum(n);
    // cout<<x<<endl;

    int c = 0;
    for (int i = n; i > 0; i /= 2)
    {
            c++;
        }
        cout << c;
    
    }