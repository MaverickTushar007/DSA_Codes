#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the number of rows of 1st matrix: ";
    cin>>m;
    int n;
    cout<<"Enter the number of cols of 1st matrix: ";
    cin>>n;

    int p;
    cout << "Enter the number of rows of 2nd matrix: ";
    cin >> p;
    int q;
    cout << "Enter the number of cols of 2nd matrix: ";
    cin >> q;

    if(n==p){

        int a[m][n];
        for (int i = 0; i<m;i++){
            for (int j = 0;j<n;j++)
            cin>>a[i][j];
        }
        
        int b[p][q];
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
                cin >> b[i][j];
        }

        //resultant matrix:
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++){
                res[i][j] = 0;
                for (int k =0; k<p;k++){
                    res[i][j] +=  a[i][k] * b[k][j];
                }
            }
        }

        //printing res
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++){
                cout << res[i][j]<<' ';
            }
            cout << endl;
        }
    }
    
}