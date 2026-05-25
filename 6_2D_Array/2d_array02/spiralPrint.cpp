#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    int n;
    cout << "Enter the number of cols of 1st matrix: ";
    cin >> n;

    // taking input a;
    int arr[n][n];
    int val = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = val++;
        }
    }

    // Print matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int minr = 0;
    int minc = 0;
    int maxr = n-1;
    int maxc = n-1;
    int tne = n*n;
    int count = 0;
    while((minr<=maxr) && (minc <= maxc)){

        //right
        for (int j = minc; j<=maxc && count<tne; j++){
            cout<<arr[minr][j]<<' ';
            count++;
        }
        minr++;
        if((minr>maxr) || (minc > maxc)) break;

        //down
        for (int j = minr; j <= maxr && count < tne; j++)
        {
            cout << arr[j][maxc]<<' ';
            count++;
        }
        maxc--;
        if ((minr > maxr) || (minc > maxc))
            break;
        //left
        for (int j = maxc; j >= minc && count < tne; j--)
        {
            cout << arr[maxr][j]<<' ';
            count++;
        }
        maxr--;
        if ((minr > maxr) || (minc > maxc))
            break;

        //up
        for (int j = maxr; j >= minr && count < tne; j--)
        {
            cout << arr[j][minc]<<' ';
            count++;
        }
        minc++;
        if ((minr > maxr) || (minc > maxc))
            break;
    }






    // priting a;
    // for (int i = 0; i < m; i++)
    // {
    //         for (int j = 0; j < n; j++)
    //         {
    //             cout << a[i][j] << ' ';
    //         }
    //         cout << endl;
    // }
        }

