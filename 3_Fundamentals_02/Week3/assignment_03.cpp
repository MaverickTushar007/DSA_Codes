#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    // for (int i = 1; i<=n; i++){
    //     for (int k = 1; k <= n + 1 - i; k++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j<=2*i-1;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int k = 1; k <= n + 1 - i; k++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << char(64+j);
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int k = 1; k <= n + 1 - i; k++)
    //             {
    //                 cout << " ";
    //             }
    //         // reverse characters
    //     for (int j = i - 1; j >= 1; j--)
    //         {
    //             cout << char(65 + j);
    //         }

    //     for (int j = 1; j <=i; j++)
    //         {
    //             cout << char(64+j);
    //         }
    //         cout << endl;
    // }

    
    // int k = n-1;
    // for (int i = 1; i<=2*n-1;i++){
    //     cout<<char(64+i);
    // }
    // cout<<endl;

    // for (int j = 1; j<=k ; j++){
    //     int a = 65;
    //     for (int l = 1; l<=k+1-j;l++){
    //         cout<<char(a);
    //         a++;
    //     }
    //     for (int l = 1; l <= 2*j - 1 ; l++)
    //     {
    //         cout << ' ';
    //         a++;
    //     }
    //     for (int l = 1; l <= k + 1 - j; l++)
    //     {
    //         cout << char(a);
    //         a++;
    //     }

    //     cout<<endl;
    // }



    // int k = n - 1;
    // for (int i = 1; i <= 2 * n - 1; i++)
    // {
    //     cout << i;
    // }
    // cout << endl;
    // for (int j = 1; j <= k; j++)
    // {
    //     int a = 1;
    //     for (int l = 1; l <= k + 1 - j; l++)
    //     {
    //         cout << a;
    //         a++;
    //     }
    //     for (int l = 1; l <= 2 * j - 1; l++)
    //     {
    //         cout << ' ';
    //     }
    //     for (int l = 1; l <= k + 1 - j; l++)
    //     {
    //         cout << (a-l);
    //     }

    //     cout << endl;
    // }



    // for (int i = 1; i <= n; i++)
    //     {

    //         for (int k = 1; k<=2*n-1;k++){
    //             if (k == i)
    //                 cout << "*";
    //             else if ((k + i) == 2*n)
    //                 cout << "*";
    //             else cout<<' ';
    //         }
    //         cout<<endl;
    // }



    // for (int i = 1; i <=n; i++){
    //     //spaces
    //     for (int j = 1; j<n-i+1;j++){
    //         cout<<' ';
    //     }

    //     //stars
    //     for (int k =1 ; k<=2*i-1; k++){
    //         if (k == 1) cout<<i;
    //         else if((k+1)/2 == i) cout<<i;
    //         else cout<<' ';
    //     }
    //     cout<<endl;
    // }

}