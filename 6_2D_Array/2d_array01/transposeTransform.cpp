#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int brr[4][4] = {1, 2, 3,4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << brr[i][j] << ' ';
        }
        cout << endl;
        ;
    }
    cout << endl;

    //transpose in the same matrix:
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {   
            if(i==j) continue;
            else{
                int temp = brr[i][j];
                brr[i][j] = brr[j][i];
                brr[j][i] = temp;
            }
        }
        cout << endl;
        ;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << brr[i][j] << ' ';
        }
        cout << endl;
        ;
    }
    cout << endl;
}