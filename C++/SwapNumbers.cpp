#include <iostream>
using namespace std;

int main(){
    cout<<"Enter two numbers to be swapped: ";
    int a;
    int b;
    cin>>a>>b;
    cout<<"Before swapping: a = "<<a<<" b = "<<b<<endl;

    int temp=a;
    a=b;
    b=temp;
    cout<<"After swapping: a = "<<a<<" b = "<<b<<endl;

    return 0;
    
}