#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout <<m.size()<<endl;
    for(auto &pr:m){   // auto keyword helps helps in shortening code 
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main(){
    map<int,string> m={{1,"a"},{2,"b"},{3,"c"}};  //declaring a pair conatainer in a map
     m[1]="abc";
     m[3]="bcd";
     m[7]="dfg";
     auto itr=m.find(7 );
     if (itr==m.end())
     {
        cout<<"no value";
     }
     else
     {
        cout<<(*itr).first<<" "<<(*itr).second;
     }
     
     
     print(m);
    return 0;
}