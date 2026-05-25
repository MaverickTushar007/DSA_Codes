#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n-1;
    for(int i =1; i<=2*n-1;i++){
        cout<<'*';
    }
    cout<<endl;
    
    for (int j = 1; j<=m;j++ ){
        for (int k = 1; k<=m-j+1;k++){
            cout<<'*';
        }
        for (int s = 1; s <= 2*j - 1; s++)
        {
            cout << ' ';
        }
        for (int k = 1; k <= m - j + 1; k++)
        {
            cout << '*';
        }
        cout<<endl;
    }
}

