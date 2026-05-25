#include<iostream>
#include<climits>
using namespace std;
// Write a program to store roll number and
// marks obtained by 4 students side by side in amatrix.
int main(){

    int brr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i,j;
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for ( i = 0; i <= 2; i++)
    {
        for (j = 0; j <=2; j++)
        {   
            if (max1 <brr[i][j]) {
                max2 = max1;    ///key line!!
                max1 = brr[i][j];}
            else if (brr[i][j] > max2 && brr[i][j] != max1)
            {
                max2 = brr[i][j];
            }
        }
    }
    cout << max1 << ' '<<max2;
} 