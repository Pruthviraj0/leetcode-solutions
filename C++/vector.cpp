
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout<<"Hello World"<<endl;
    
    vector<int> vec(3,0);
    
    vector<int> numbers={1,2,3,4,5};
    
    vector<char> characters={'a','b','c','d','e','f'};
    
    for(int ival : vec){
        cout<<ival<<endl;
    }
    
    for(int val : numbers){//...for each loop
        cout<<val<<endl;
        
    }
    for(char cval : characters){
        cout<<cval<<endl;
    }
    

    return 0;
}