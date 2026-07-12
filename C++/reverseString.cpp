#include <iostream>
using namespace std;

int main(){
    cout<<"enter the string to be reversed: ";
    string str;
    cin>>str;
    cout<<"The reversed string: ";
    int length=str.length();
    for(int i=length-1;i>=0;i--){
        cout<<str[i];
    }
    return 0;
}