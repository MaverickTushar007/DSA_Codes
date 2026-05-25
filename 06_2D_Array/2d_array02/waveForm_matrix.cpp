#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m;
    cout << "Enter the number of rows of 1st matrix: ";
    cin >> m;
    int n;
    cout << "Enter the number of cols of 1st matrix: ";
    cin >> n;

    //taking input a;
    int a[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        }
    
    
        //priting a;
        // for (int i = 0; i < m; i++)
        // {
        //     if (i % 2 == 0){
        //         for (int j = 0; j < n; j++)
        //         {
        //             cout << a[i][j] << ' ';
        //         }
        //         cout << endl;
        //     }
        //     else{
        //         for (int j = n-1; j>=0;j--){
        //             cout<< a[i][j]<<' ';
        //         }
        //         cout << endl;
        //         }
        //     }
        //     cout << endl;




        // for (int i = m-1; i >= 0; i--)
        // {
        //     if (i % 2 == 0)
        //     {
        //         for (int j = 0; j < n; j++)
        //         {
        //             cout << a[i][j] << ' ';
        //         }
        //         cout << endl;
        //     }
        //     else
        //     {
        //         for (int j = n - 1; j >= 0; j--)
        //         {
        //             cout << a[i][j] << ' ';
        //         }
        //         cout << endl;
        //     }
        // }
        // cout << endl;

        // columns wise print ---> outside loop should be of j inside of i
        for (int j = 0; j < n; j++)
        {
                for (int i = 0; i < m; i++)
                {
                    cout << a[i][j] << ' ';
                }
                cout << endl;
        }
            cout << endl;
        }
    
