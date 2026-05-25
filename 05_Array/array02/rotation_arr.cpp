#include <iostream>
#include <vector>
using namespace std;

void reverse_part(int i, int j , vector<int> & v){
    while (i <= j)
    {
        // swap the v[i] And v[j]
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
void display(vector<int> &v){
    for (int i =0; i<=v.size()-1;i++){
        cout<<v[i]<<' ';
    }
}
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(6);

    display(v);
    cout<<endl;
    int k;
    int n = v.size();
    cout<<"step to rotate: ";
    cin>>k;
    if (k>n) k = k%n;

    reverse_part(0,n-k-1,v);
    reverse_part(n-k,n-1,v);
    reverse_part(0, n-1, v);
    display(v);

}