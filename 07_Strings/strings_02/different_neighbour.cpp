#include <iostream>
#include <string>
using namespace std;

// Warmup Problem : Input a string and return the
//number of times the neighbouring characters are different from each other.


int main()
{
    string str = "ab";
    int count = 0;
    int n = str.length();

    
    for(int i = 0; i<n;i++){
        if (n==1){
            break;
        }
        if (n == 2 && str[0] != str[1])
        {   count = 1;
            break;
        }
        cout<<str[i]<<' ';
        if(i ==0) {
            if (str[i] != str[i+1]) count++;
        }
        else if ((str[i] != str[i + 1]) && (str[i] != str[i - 1]))
            count++;
        else if (i == n - 1)
            if (str[i] != str[i - 1])
                count++;
    }
    cout<<endl;
    cout<<count;
    
    
}
