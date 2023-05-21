#include<iostream>
using namespace std;
int main(){
    cout<<"enter a no."<<endl;
    int a;
    cin>>a;
    for (int i = 0; i < 50; i++)
    {
        if (i==a)
    {
        continue;
    }
       cout<<i<<endl;
    
    }
    
    
    return 0;
}