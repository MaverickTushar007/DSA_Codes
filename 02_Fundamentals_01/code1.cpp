#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>> ch;

    if (ch >= 'A' && ch <='Z'){
        ch = ch + 32;
    }
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout<<"vovels";
    }
    else{
        cout<<"consonents";
    }
}




