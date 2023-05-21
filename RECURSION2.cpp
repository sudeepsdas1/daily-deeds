#include<iostream>
using namespace std;
int expo(int a,int n){
    if (n==0)
    {
        return 1;
    }
    
    int prevexpo=expo(a,n-1);
    return a*prevexpo;
}
int main(){
    int a;
    cout<<"enter the base"<<endl;
    cin>>a;
    int n;
    cout<<"enter the power"<<endl;
    cin>>n;
    cout<<expo(a,n)<<endl;
    
    return 0;
}
