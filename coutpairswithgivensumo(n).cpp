/*print the strings in lexographical order with the frequencies of the strings*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> m;
    int n;
    cin>>n;
    int k;
    cin>>k;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin>>s;
        m[s]++;
    }
    for (auto pr:m){
        int x=k-pr.first;
        if (x=m[s])
        {
            count+=pr.second;
        }
        
        return (count/2);
    }
    
    return 0;
}