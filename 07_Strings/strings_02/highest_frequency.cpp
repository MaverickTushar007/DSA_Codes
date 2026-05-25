
#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{   // NOT the most efficient mehtod!!!
    

    // int max = 0;
    // for (int i = 0; i<=s.length();i++){
    //     char ch = s[i];
    //     int count= 1;
    //     for (int j = i+1; j<=s.length();j++){
    //         if (s[j] == s[i]) count++;
    //     }
    //     if(max<count) max = count;
    // }

    // for (int i = 0; i <= s.length(); i++)
    // {
    //     char ch = s[i];
    //     int count = 1;
    //     for (int j = i + 1; j <= s.length(); j++)
    //     {
    //         if (s[j] == s[i])
    //             count++;
    //     }
    //     if (max == count) {
    //         cout<<ch<<' '<<max<<endl;
    //     }
    // }


    //Efficient code
    string s = "physicswallah";
    vector<int> arr(26,0);
    for (int i = 0; i<s.length();i++){
        char ch = s[i];
        int ascii = int(ch);
        arr[ascii-97]++;
    }
    int mx = 0;
    for (int j = 0; j<arr.size();j++){
        if(arr[j]>mx)  mx = arr[j];
    }
    for (int j = 0; j<arr.size();j++){
        if (arr[j] == mx){
            int ascii = j+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }
    }
