#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; i <=n-i+1; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}