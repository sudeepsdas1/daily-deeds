#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
        v.push_back(33);
            v.push_back(3);
                v.push_back(33333333);
                    v.push_back(333);
                    cout<<"find this"<<endl<<binary_search(v.begin(),v.end(),1);
                    
                    cout<<"find this"<<endl<<lower_bound(v.begin(),v.end(),1)-v.begin();
                    cout<<endl;
                    int a=32;
                    int b=45;
                    cout<<min(a,b)<<endl;
                    cout<<max(a,b)<<endl;
                    swap(a,b);
                    cout<<endl<<a<<endl<<b<<endl;
                    string s= "abcdefg";
                    reverse(s.begin(),s.end());
                    cout<<s<<endl;
    return 0;
}