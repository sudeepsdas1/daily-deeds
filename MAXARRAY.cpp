#include<iostream>
using namespace std;
int main(){
    int mx=-123456789;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[n];
    }
    for (int i = 0; i<n; i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}