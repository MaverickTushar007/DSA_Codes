#include <iostream>
#include <vector>
using namespace std;

// Write a program to copy the contents of one
// array into another in the reverse order.
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);
    v.push_back(6);
    v.push_back(7);
    v.push_back(2);
    v.push_back(6);

    // int i = 0;
    // int j = v.size()-1;

    //reverse using while
    // while (i<=j){
    //     //swap the v[i] And v[j]
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;    
    // }

    //using the for loop..
    for (int i = 0, j = v.size()-1;i<=j; i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout<<endl;


    //reverse part of an array;(1,5)
    int i = 1;
    int j = 5;

    // reverse using while
    while (i<=j){
         //swap the v[i] And v[j]
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
}