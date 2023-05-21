#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="sudeep";
    m[2]="sujit";
    m[13]="subojit";
    m[16]="sume";
    m[18]="meera";
    m.insert({5,"aniket"});
    for (auto i:m)
    {
        cout<<i.first<<":  "<<i.second<<endl;
    }
    cout<<"is 6 present"<<"  "<<m.count(6)<<endl; 
    m.erase(2);

    cout<<"          "<<endl<<endl<<endl;
      for (auto i:m)
    {
        cout<<i.first<<":  "<<i.second<<endl;
    }
    auto it = m.find(5);
    for (auto k = it; k!=m.end(); k++)
    {
        cout<<(*k).first<<endl; 
    }
     
    
     
    return 0;
}    