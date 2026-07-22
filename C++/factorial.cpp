#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    long long factorial=1;
    
    int i=1;
    while(i<=n){
        factorial*=i;
        i++;
    }
    cout<<"The factorial of number "<<n<<" is :"<<factorial;
    
    return 0;
}