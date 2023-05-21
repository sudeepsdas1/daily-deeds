#include<bits/stdc++.h>
using namespace std;
void PrintVec(vector<pair<int,int>> v){
    cout<<"size of the vector: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
      cout<<v[i].first<<" "<<v[i].second<<" ";
    }
    cout<<endl;
}
int main(){
    vector<pair<int,int>> v;
int x;
cin>>x;
for (int i = 0; i < x; i++)
{
    int n,m;
    cin>>n>>m;
    v.push_back({n,m});
}
PrintVec(v);


    return 0;
}
