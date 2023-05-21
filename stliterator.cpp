#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> v={1,2,3,4,5};
    // vector<int>:: iterator it = v.begin();
    // for (it = v.begin(); it <v.end(); it++)
    // {
    //     cout<<(*it)<<endl;
    // }

    vector<pair<int,int> > v_p={{1,2},{2,3},{3,4}};
    vector<pair<int,int> > :: iterator it; 
    for(it=v_p.begin();it!=v_p.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    //range based loops
    for(int value:v){  //int here int can be replaced with auto
        cout<<value<<endl;
    }
       //range based loops for a pair v 
    for(pair<int,int> &value:v){  //pair<int,int>  here can be replaced with auto keyword
        cout<<value<<endl;
    }
    return 0;
} 