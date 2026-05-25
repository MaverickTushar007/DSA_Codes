
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
    string str = "My name is Tushar Bhatt. I'm a Tushar student Tushar at NITK.";
    vector<string> v;
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end());
    cout<<endl;

    int maxCount = 1;
    int count = 1;

    for(int i = 0;i<v.size();i++){
        if(v[i] == v[i+1]) count++;
        else count = 1;
        maxCount = max(maxCount, count);
    }

    count = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[i + 1])
            count++;
        else
            count = 1;
        if (count == maxCount) cout<<v[i]<<' '<<maxCount<<endl;
    }
}   
