#include <iostream>
using namespace std;

int main()
{
    int n,m;
    // cin>>m;
    cin>>n;

    // for (int i = 1; i<=n;i++){
    //     for (int j = 1; j<=n;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n+1-i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << char(j+64);
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     if (i%2 != 0){
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout <<j;
    //         }
    //         cout << endl;
    //     }
    //     else{
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << char(64+ j);
    //         }
    //         cout << endl;
    //     }
    // }

    // int nsp = 1;
    // for (int i = 1; i<=2*n-1; i++){
    //     for (int j = 1; j<=nsp; j++ ){
    //         cout<<'*';
    //     }
    //     cout<<endl;
    // if (i<n) nsp++;
    // else nsp--;
    // }

    // for (int i = 1; i<=m; i++){
    //     for( int j = 1; j<=n; j++){
    //         if ((i>1 && i<m) && (j>1 && j<n)) cout<<' ';
    //         else cout<<'*';
    //     }
    //     cout<<endl;
    // }

    // for (int i = 1; i<=n;i++){
    //     for (int j = i; j>0;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    int nst = 1;
    int nsp = n-1;
    for (int i = 1; i<=2*n-1; i++){
        //spaces
        for (int j = 1; j <= nsp; j++)
        {
            cout << ' ';
        }

        //stars
        for (int j = 1; j<=nst; j++ ){
            cout<<'*';
        }
        cout<<endl;
        if (i < n)
            nst++;
        else
            nst--;

        if (i >=n)
            nsp++;
        else
            nsp--;
    }
}

