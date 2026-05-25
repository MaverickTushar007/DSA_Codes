#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int m = matrix.size();
    int n = matrix[0].size();

    vector<vector<int>> new_matrix(m, vector<int>(m));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            new_matrix[i][j] = matrix[j][i];
        }
    }

    for (int k = 0; k < m; k++)
    {
        int i = 0;
        int j = n - 1;

        while (i < j)
        {
            int temp = new_matrix[k][i];
            new_matrix[k][i] = new_matrix[k][j];
            new_matrix[k][j] = temp;

            i++;
            j--;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << new_matrix[i][j] << " ";
        }
        cout << endl;
    }
}
