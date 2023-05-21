#include<iostream>
using namespace std;
int main(){
    cout<<"enter a no."<<endl;
    int a;
    cin>>a;
    for (int i = 0; i < 50; i++)
    {
       cout<<i<<endl;
    if (i==a)
    {
        break;
    }
    }
    
    
    return 0;
}