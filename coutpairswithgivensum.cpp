#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int count=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    };
    for (int i = 0; i < n; i++)
    {
        for (int j = i; i < n; j++)
        {
            int x=arr[i]+arr[j];
           if (x=k)
           {
            count++;
           }
           
        }
    }
    
    cout<<count<<endl;
    
    
  return 0;  
}