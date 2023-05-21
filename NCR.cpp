#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for (int i = 1; i <=n; i++)
    {
        factorial*=i;
    }
    return factorial;
    
}
int main(){
    cout<<"Enter the value for n"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the value for r"<<endl;
    int r;
    cin>>r;
    int ans= fact(n);
    cout<<ans<<endl;

    return 0;
}