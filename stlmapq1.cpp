/*print the strings in lexographical order with the frequencies of the strings*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin>>s;
        m[s]++;
    }
    for (auto pr:m){
        cout<<pr.first<<" "<<pr.second<< endl;
    }
    
    return 0;
}